/*+@@file@@----------------------------------------------------------------*//*!
 \file		mswmdm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 23:28:02 2016
 \date		Modified on Sun Aug 14 23:28:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __mswmdm_h__
#define __mswmdm_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMDMMetaData_FWD_DEFINED__
#define __IWMDMMetaData_FWD_DEFINED__
typedef interface IWMDMMetaData IWMDMMetaData;
#endif
#ifndef __IWMDeviceManager_FWD_DEFINED__
#define __IWMDeviceManager_FWD_DEFINED__
typedef interface IWMDeviceManager IWMDeviceManager;
#endif
#ifndef __IWMDeviceManager2_FWD_DEFINED__
#define __IWMDeviceManager2_FWD_DEFINED__
typedef interface IWMDeviceManager2 IWMDeviceManager2;
#endif
#ifndef __IWMDeviceManager3_FWD_DEFINED__
#define __IWMDeviceManager3_FWD_DEFINED__
typedef interface IWMDeviceManager3 IWMDeviceManager3;
#endif
#ifndef __IWMDMStorageGlobals_FWD_DEFINED__
#define __IWMDMStorageGlobals_FWD_DEFINED__
typedef interface IWMDMStorageGlobals IWMDMStorageGlobals;
#endif
#ifndef __IWMDMStorage_FWD_DEFINED__
#define __IWMDMStorage_FWD_DEFINED__
typedef interface IWMDMStorage IWMDMStorage;
#endif
#ifndef __IWMDMStorage2_FWD_DEFINED__
#define __IWMDMStorage2_FWD_DEFINED__
typedef interface IWMDMStorage2 IWMDMStorage2;
#endif
#ifndef __IWMDMStorage3_FWD_DEFINED__
#define __IWMDMStorage3_FWD_DEFINED__
typedef interface IWMDMStorage3 IWMDMStorage3;
#endif
#ifndef __IWMDMStorage4_FWD_DEFINED__
#define __IWMDMStorage4_FWD_DEFINED__
typedef interface IWMDMStorage4 IWMDMStorage4;
#endif
#ifndef __IWMDMOperation_FWD_DEFINED__
#define __IWMDMOperation_FWD_DEFINED__
typedef interface IWMDMOperation IWMDMOperation;
#endif
#ifndef __IWMDMOperation2_FWD_DEFINED__
#define __IWMDMOperation2_FWD_DEFINED__
typedef interface IWMDMOperation2 IWMDMOperation2;
#endif
#ifndef __IWMDMOperation3_FWD_DEFINED__
#define __IWMDMOperation3_FWD_DEFINED__
typedef interface IWMDMOperation3 IWMDMOperation3;
#endif
#ifndef __IWMDMProgress_FWD_DEFINED__
#define __IWMDMProgress_FWD_DEFINED__
typedef interface IWMDMProgress IWMDMProgress;
#endif
#ifndef __IWMDMProgress2_FWD_DEFINED__
#define __IWMDMProgress2_FWD_DEFINED__
typedef interface IWMDMProgress2 IWMDMProgress2;
#endif
#ifndef __IWMDMProgress3_FWD_DEFINED__
#define __IWMDMProgress3_FWD_DEFINED__
typedef interface IWMDMProgress3 IWMDMProgress3;
#endif
#ifndef __IWMDMDevice_FWD_DEFINED__
#define __IWMDMDevice_FWD_DEFINED__
typedef interface IWMDMDevice IWMDMDevice;
#endif
#ifndef __IWMDMDevice2_FWD_DEFINED__
#define __IWMDMDevice2_FWD_DEFINED__
typedef interface IWMDMDevice2 IWMDMDevice2;
#endif
#ifndef __IWMDMDevice3_FWD_DEFINED__
#define __IWMDMDevice3_FWD_DEFINED__
typedef interface IWMDMDevice3 IWMDMDevice3;
#endif
#ifndef __IWMDMDeviceSession_FWD_DEFINED__
#define __IWMDMDeviceSession_FWD_DEFINED__
typedef interface IWMDMDeviceSession IWMDMDeviceSession;
#endif
#ifndef __IWMDMEnumDevice_FWD_DEFINED__
#define __IWMDMEnumDevice_FWD_DEFINED__
typedef interface IWMDMEnumDevice IWMDMEnumDevice;
#endif
#ifndef __IWMDMDeviceControl_FWD_DEFINED__
#define __IWMDMDeviceControl_FWD_DEFINED__
typedef interface IWMDMDeviceControl IWMDMDeviceControl;
#endif
#ifndef __IWMDMEnumStorage_FWD_DEFINED__
#define __IWMDMEnumStorage_FWD_DEFINED__
typedef interface IWMDMEnumStorage IWMDMEnumStorage;
#endif
#ifndef __IWMDMStorageControl_FWD_DEFINED__
#define __IWMDMStorageControl_FWD_DEFINED__
typedef interface IWMDMStorageControl IWMDMStorageControl;
#endif
#ifndef __IWMDMStorageControl2_FWD_DEFINED__
#define __IWMDMStorageControl2_FWD_DEFINED__
typedef interface IWMDMStorageControl2 IWMDMStorageControl2;
#endif
#ifndef __IWMDMStorageControl3_FWD_DEFINED__
#define __IWMDMStorageControl3_FWD_DEFINED__
typedef interface IWMDMStorageControl3 IWMDMStorageControl3;
#endif
#ifndef __IWMDMObjectInfo_FWD_DEFINED__
#define __IWMDMObjectInfo_FWD_DEFINED__
typedef interface IWMDMObjectInfo IWMDMObjectInfo;
#endif
#ifndef __IWMDMRevoked_FWD_DEFINED__
#define __IWMDMRevoked_FWD_DEFINED__
typedef interface IWMDMRevoked IWMDMRevoked;
#endif
#ifndef __IWMDMNotification_FWD_DEFINED__
#define __IWMDMNotification_FWD_DEFINED__
typedef interface IWMDMNotification IWMDMNotification;
#endif
#ifndef __IMDServiceProvider_FWD_DEFINED__
#define __IMDServiceProvider_FWD_DEFINED__
typedef interface IMDServiceProvider IMDServiceProvider;
#endif
#ifndef __IMDServiceProvider2_FWD_DEFINED__
#define __IMDServiceProvider2_FWD_DEFINED__
typedef interface IMDServiceProvider2 IMDServiceProvider2;
#endif
#ifndef __IMDServiceProvider3_FWD_DEFINED__
#define __IMDServiceProvider3_FWD_DEFINED__
typedef interface IMDServiceProvider3 IMDServiceProvider3;
#endif
#ifndef __IMDSPEnumDevice_FWD_DEFINED__
#define __IMDSPEnumDevice_FWD_DEFINED__
typedef interface IMDSPEnumDevice IMDSPEnumDevice;
#endif
#ifndef __IMDSPDevice_FWD_DEFINED__
#define __IMDSPDevice_FWD_DEFINED__
typedef interface IMDSPDevice IMDSPDevice;
#endif
#ifndef __IMDSPDevice2_FWD_DEFINED__
#define __IMDSPDevice2_FWD_DEFINED__
typedef interface IMDSPDevice2 IMDSPDevice2;
#endif
#ifndef __IMDSPDevice3_FWD_DEFINED__
#define __IMDSPDevice3_FWD_DEFINED__
typedef interface IMDSPDevice3 IMDSPDevice3;
#endif
#ifndef __IMDSPDeviceControl_FWD_DEFINED__
#define __IMDSPDeviceControl_FWD_DEFINED__
typedef interface IMDSPDeviceControl IMDSPDeviceControl;
#endif
#ifndef __IMDSPEnumStorage_FWD_DEFINED__
#define __IMDSPEnumStorage_FWD_DEFINED__
typedef interface IMDSPEnumStorage IMDSPEnumStorage;
#endif
#ifndef __IMDSPStorage_FWD_DEFINED__
#define __IMDSPStorage_FWD_DEFINED__
typedef interface IMDSPStorage IMDSPStorage;
#endif
#ifndef __IMDSPStorage2_FWD_DEFINED__
#define __IMDSPStorage2_FWD_DEFINED__
typedef interface IMDSPStorage2 IMDSPStorage2;
#endif
#ifndef __IMDSPStorage3_FWD_DEFINED__
#define __IMDSPStorage3_FWD_DEFINED__
typedef interface IMDSPStorage3 IMDSPStorage3;
#endif
#ifndef __IMDSPStorage4_FWD_DEFINED__
#define __IMDSPStorage4_FWD_DEFINED__
typedef interface IMDSPStorage4 IMDSPStorage4;
#endif
#ifndef __IMDSPStorageGlobals_FWD_DEFINED__
#define __IMDSPStorageGlobals_FWD_DEFINED__
typedef interface IMDSPStorageGlobals IMDSPStorageGlobals;
#endif
#ifndef __IMDSPObjectInfo_FWD_DEFINED__
#define __IMDSPObjectInfo_FWD_DEFINED__
typedef interface IMDSPObjectInfo IMDSPObjectInfo;
#endif
#ifndef __IMDSPObject_FWD_DEFINED__
#define __IMDSPObject_FWD_DEFINED__
typedef interface IMDSPObject IMDSPObject;
#endif
#ifndef __IMDSPObject2_FWD_DEFINED__
#define __IMDSPObject2_FWD_DEFINED__
typedef interface IMDSPObject2 IMDSPObject2;
#endif
#ifndef __IMDSPDirectTransfer_FWD_DEFINED__
#define __IMDSPDirectTransfer_FWD_DEFINED__
typedef interface IMDSPDirectTransfer IMDSPDirectTransfer;
#endif
#ifndef __IMDSPRevoked_FWD_DEFINED__
#define __IMDSPRevoked_FWD_DEFINED__
typedef interface IMDSPRevoked IMDSPRevoked;
#endif
#ifndef __ISCPSecureAuthenticate_FWD_DEFINED__
#define __ISCPSecureAuthenticate_FWD_DEFINED__
typedef interface ISCPSecureAuthenticate ISCPSecureAuthenticate;
#endif
#ifndef __ISCPSecureAuthenticate2_FWD_DEFINED__
#define __ISCPSecureAuthenticate2_FWD_DEFINED__
typedef interface ISCPSecureAuthenticate2 ISCPSecureAuthenticate2;
#endif
#ifndef __ISCPSecureQuery_FWD_DEFINED__
#define __ISCPSecureQuery_FWD_DEFINED__
typedef interface ISCPSecureQuery ISCPSecureQuery;
#endif
#ifndef __ISCPSecureQuery2_FWD_DEFINED__
#define __ISCPSecureQuery2_FWD_DEFINED__
typedef interface ISCPSecureQuery2 ISCPSecureQuery2;
#endif
#ifndef __ISCPSecureExchange_FWD_DEFINED__
#define __ISCPSecureExchange_FWD_DEFINED__
typedef interface ISCPSecureExchange ISCPSecureExchange;
#endif
#ifndef __ISCPSecureExchange2_FWD_DEFINED__
#define __ISCPSecureExchange2_FWD_DEFINED__
typedef interface ISCPSecureExchange2 ISCPSecureExchange2;
#endif
#ifndef __ISCPSecureExchange3_FWD_DEFINED__
#define __ISCPSecureExchange3_FWD_DEFINED__
typedef interface ISCPSecureExchange3 ISCPSecureExchange3;
#endif
#ifndef __ISCPSession_FWD_DEFINED__
#define __ISCPSession_FWD_DEFINED__
typedef interface ISCPSession ISCPSession;
#endif
#ifndef __ISCPSecureQuery3_FWD_DEFINED__
#define __ISCPSecureQuery3_FWD_DEFINED__
typedef interface ISCPSecureQuery3 ISCPSecureQuery3;
#endif
#ifndef __IComponentAuthenticate_FWD_DEFINED__
#define __IComponentAuthenticate_FWD_DEFINED__
typedef interface IComponentAuthenticate IComponentAuthenticate;
#endif
#ifndef __MediaDevMgrClassFactory_FWD_DEFINED__
#define __MediaDevMgrClassFactory_FWD_DEFINED__
typedef struct MediaDevMgrClassFactory MediaDevMgrClassFactory;
#endif
#ifndef __MediaDevMgr_FWD_DEFINED__
#define __MediaDevMgr_FWD_DEFINED__
typedef struct MediaDevMgr MediaDevMgr;
#endif
#ifndef __WMDMDevice_FWD_DEFINED__
#define __WMDMDevice_FWD_DEFINED__
typedef struct WMDMDevice WMDMDevice;
#endif
#ifndef __WMDMStorage_FWD_DEFINED__
#define __WMDMStorage_FWD_DEFINED__
typedef struct WMDMStorage WMDMStorage;
#endif
#ifndef __WMDMStorageGlobal_FWD_DEFINED__
#define __WMDMStorageGlobal_FWD_DEFINED__
typedef struct WMDMStorageGlobal WMDMStorageGlobal;
#endif
#ifndef __WMDMDeviceEnum_FWD_DEFINED__
#define __WMDMDeviceEnum_FWD_DEFINED__
typedef struct WMDMDeviceEnum WMDMDeviceEnum;
#endif
#ifndef __WMDMStorageEnum_FWD_DEFINED__
#define __WMDMStorageEnum_FWD_DEFINED__
typedef struct WMDMStorageEnum WMDMStorageEnum;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_MTP
#define _DEFINE_WMDM_DEVICE_PROTOCOL_MTP
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MTP, 0x979e54e5, 0xafc, 0x4604, 0x8d, 0x93, 0xdc, 0x79, 0x8a, 0x4b, 0xcf, 0x45);
#endif
#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_RAPI
#define _DEFINE_WMDM_DEVICE_PROTOCOL_RAPI
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_RAPI, 0x2a11ed91, 0x8c8f, 0x41e4, 0x82, 0xd1, 0x83, 0x86, 0xe0, 0x3, 0x56, 0x1c);
#endif
#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_MSC
#define _DEFINE_WMDM_DEVICE_PROTOCOL_MSC
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MSC, 0xa4d2c26c, 0xa881, 0x44bb, 0xbd, 0x5d, 0x1f, 0x70, 0x3c, 0x71, 0xf7, 0xa9);
#endif
#ifndef _DEFINE_WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT
#define _DEFINE_WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT
DEFINE_GUID(WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT, 0x7de8686d, 0x78ee, 0x43ea, 0xa4, 0x96, 0xc6, 0x25, 0xac, 0x91, 0xcc, 0x5d);
#endif
typedef enum tagWMDM_TAG_DATATYPE
{
	WMDM_TYPE_DWORD = 0,
	WMDM_TYPE_STRING = 1,
	WMDM_TYPE_BINARY = 2,
	WMDM_TYPE_BOOL = 3,
	WMDM_TYPE_QWORD = 4,
	WMDM_TYPE_WORD = 5,
	WMDM_TYPE_GUID = 6,
	WMDM_TYPE_DATE = 7
} WMDM_TAG_DATATYPE;
typedef enum tagWMDM_SESSION_TYPE
{
	WMDM_SESSION_NONE = 0,
	WMDM_SESSION_TRANSFER_TO_DEVICE = 0x1,
	WMDM_SESSION_TRANSFER_FROM_DEVICE = 0x10,
	WMDM_SESSION_DELETE = 0x100,
	WMDM_SESSION_CUSTOM = 0x1000
} WMDM_SESSION_TYPE;
typedef struct _tWAVEFORMATEX
{
	WORD wFormatTag;
	WORD nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD nBlockAlign;
	WORD wBitsPerSample;
	WORD cbSize;
} _WAVEFORMATEX;
typedef struct _tagBITMAPINFOHEADER
{
	DWORD biSize;
	LONG biWidth;
	LONG biHeight;
	WORD biPlanes;
	WORD biBitCount;
	DWORD biCompression;
	DWORD biSizeImage;
	LONG biXPelsPerMeter;
	LONG biYPelsPerMeter;
	DWORD biClrUsed;
	DWORD biClrImportant;
} _BITMAPINFOHEADER;
typedef struct _tagVIDEOINFOHEADER
{
	RECT rcSource;
	RECT rcTarget;
	DWORD dwBitRate;
	DWORD dwBitErrorRate;
	LONGLONG AvgTimePerFrame;
	_BITMAPINFOHEADER bmiHeader;
} _VIDEOINFOHEADER;
typedef struct _tagWMFILECAPABILITIES
{
	LPWSTR pwszMimeType;
	DWORD dwReserved;
} WMFILECAPABILITIES;
typedef struct __OPAQUECOMMAND
{
	GUID guidCommand;
	DWORD dwDataLen;
	BYTE *pData;
	BYTE abMAC[20];
} OPAQUECOMMAND;
#define	WMDMID_LENGTH	( 128 )
typedef struct __WMDMID
{
	UINT cbSize;
	DWORD dwVendorID;
	BYTE pID[128];
	UINT SerialNumberLength;
} WMDMID;
typedef struct __WMDMID *PWMDMID;
typedef struct _WMDMDATETIME
{
	WORD wYear;
	WORD wMonth;
	WORD wDay;
	WORD wHour;
	WORD wMinute;
	WORD wSecond;
} WMDMDATETIME;
typedef struct _WMDMDATETIME *PWMDMDATETIME;
typedef struct __WMDMRIGHTS
{
	UINT cbSize;
	DWORD dwContentType;
	DWORD fuFlags;
	DWORD fuRights;
	DWORD dwAppSec;
	DWORD dwPlaybackCount;
	WMDMDATETIME ExpirationDate;
} WMDMRIGHTS;
typedef struct __WMDMRIGHTS *PWMDMRIGHTS;
typedef struct __WMDMMetadataView
{
	WCHAR *pwszViewName;
	UINT nDepth;
	WCHAR **ppwszTags;
} WMDMMetadataView;
typedef enum tagWMDM_STORAGE_ENUM_MODE
{
	ENUM_MODE_RAW = 0,
	ENUM_MODE_USE_DEVICE_PREF = (ENUM_MODE_RAW + 1),
	ENUM_MODE_METADATA_VIEWS = (ENUM_MODE_USE_DEVICE_PREF + 1)
} WMDM_STORAGE_ENUM_MODE;
typedef enum tagWMDM_FORMATCODE
{
	WMDM_FORMATCODE_NOTUSED = 0,
	WMDM_FORMATCODE_ALLIMAGES = 0xffffffff,
	WMDM_FORMATCODE_UNDEFINED = 0x3000,
	WMDM_FORMATCODE_ASSOCIATION = 0x3001,
	WMDM_FORMATCODE_SCRIPT = 0x3002,
	WMDM_FORMATCODE_EXECUTABLE = 0x3003,
	WMDM_FORMATCODE_TEXT = 0x3004,
	WMDM_FORMATCODE_HTML = 0x3005,
	WMDM_FORMATCODE_DPOF = 0x3006,
	WMDM_FORMATCODE_AIFF = 0x3007,
	WMDM_FORMATCODE_WAVE = 0x3008,
	WMDM_FORMATCODE_MP3 = 0x3009,
	WMDM_FORMATCODE_AVI = 0x300a,
	WMDM_FORMATCODE_MPEG = 0x300b,
	WMDM_FORMATCODE_ASF = 0x300c,
	WMDM_FORMATCODE_RESERVED_FIRST = 0x300d,
	WMDM_FORMATCODE_RESERVED_LAST = 0x37ff,
	WMDM_FORMATCODE_IMAGE_UNDEFINED = 0x3800,
	WMDM_FORMATCODE_IMAGE_EXIF = 0x3801,
	WMDM_FORMATCODE_IMAGE_TIFFEP = 0x3802,
	WMDM_FORMATCODE_IMAGE_FLASHPIX = 0x3803,
	WMDM_FORMATCODE_IMAGE_BMP = 0x3804,
	WMDM_FORMATCODE_IMAGE_CIFF = 0x3805,
	WMDM_FORMATCODE_IMAGE_GIF = 0x3807,
	WMDM_FORMATCODE_IMAGE_JFIF = 0x3808,
	WMDM_FORMATCODE_IMAGE_PCD = 0x3809,
	WMDM_FORMATCODE_IMAGE_PICT = 0x380a,
	WMDM_FORMATCODE_IMAGE_PNG = 0x380b,
	WMDM_FORMATCODE_IMAGE_TIFF = 0x380d,
	WMDM_FORMATCODE_IMAGE_TIFFIT = 0x380e,
	WMDM_FORMATCODE_IMAGE_JP2 = 0x380f,
	WMDM_FORMATCODE_IMAGE_JPX = 0x3810,
	WMDM_FORMATCODE_IMAGE_RESERVED_FIRST = 0x3811,
	WMDM_FORMATCODE_IMAGE_RESERVED_LAST = 0x3fff,
	WMDM_FORMATCODE_UNDEFINEDFIRMWARE = 0xb802,
	WMDM_FORMATCODE_WINDOWSIMAGEFORMAT = 0xb881,
	WMDM_FORMATCODE_UNDEFINEDAUDIO = 0xb900,
	WMDM_FORMATCODE_WMA = 0xb901,
	WMDM_FORMATCODE_OGG = 0xb902,
	WMDM_FORMATCODE_AAC = 0xb903,
	WMDM_FORMATCODE_AUDIBLE = 0xb904,
	WMDM_FORMATCODE_FLAC = 0xb906,
	WMDM_FORMATCODE_UNDEFINEDVIDEO = 0xb980,
	WMDM_FORMATCODE_WMV = 0xb981,
	WMDM_FORMATCODE_MP4 = 0xb982,
	WMDM_FORMATCODE_MP2 = 0xb983,
	WMDM_FORMATCODE_3GP = 0xb984,
	WMDM_FORMATCODE_UNDEFINEDCOLLECTION = 0xba00,
	WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM = 0xba01,
	WMDM_FORMATCODE_ABSTRACTIMAGEALBUM = 0xba02,
	WMDM_FORMATCODE_ABSTRACTAUDIOALBUM = 0xba03,
	WMDM_FORMATCODE_ABSTRACTVIDEOALBUM = 0xba04,
	WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST = 0xba05,
	WMDM_FORMATCODE_ABSTRACTCONTACTGROUP = 0xba06,
	WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER = 0xba07,
	WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION = 0xba08,
	WMDM_FORMATCODE_MEDIA_CAST = 0xba0b,
	WMDM_FORMATCODE_WPLPLAYLIST = 0xba10,
	WMDM_FORMATCODE_M3UPLAYLIST = 0xba11,
	WMDM_FORMATCODE_MPLPLAYLIST = 0xba12,
	WMDM_FORMATCODE_ASXPLAYLIST = 0xba13,
	WMDM_FORMATCODE_PLSPLAYLIST = 0xba14,
	WMDM_FORMATCODE_UNDEFINEDDOCUMENT = 0xba80,
	WMDM_FORMATCODE_ABSTRACTDOCUMENT = 0xba81,
	WMDM_FORMATCODE_XMLDOCUMENT = 0xba82,
	WMDM_FORMATCODE_MICROSOFTWORDDOCUMENT = 0xba83,
	WMDM_FORMATCODE_MHTCOMPILEDHTMLDOCUMENT = 0xba84,
	WMDM_FORMATCODE_MICROSOFTEXCELSPREADSHEET = 0xba85,
	WMDM_FORMATCODE_MICROSOFTPOWERPOINTDOCUMENT = 0xba86,
	WMDM_FORMATCODE_UNDEFINEDMESSAGE = 0xbb00,
	WMDM_FORMATCODE_ABSTRACTMESSAGE = 0xbb01,
	WMDM_FORMATCODE_UNDEFINEDCONTACT = 0xbb80,
	WMDM_FORMATCODE_ABSTRACTCONTACT = 0xbb81,
	WMDM_FORMATCODE_VCARD2 = 0xbb82,
	WMDM_FORMATCODE_VCARD3 = 0xbb83,
	WMDM_FORMATCODE_UNDEFINEDCALENDARITEM = 0xbe00,
	WMDM_FORMATCODE_ABSTRACTCALENDARITEM = 0xbe01,
	WMDM_FORMATCODE_VCALENDAR1 = 0xbe02,
	WMDM_FORMATCODE_VCALENDAR2 = 0xbe03,
	WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE = 0xbe80,
	WMDM_FORMATCODE_M4A = 0x4d503441,
	WMDM_FORMATCODE_3GPA = 0x33475041,
	WMDM_FORMATCODE_SECTION = 0xbe82
} WMDM_FORMATCODE;
typedef enum _WMDM_ENUM_PROP_VALID_VALUES_FORM
{
	WMDM_ENUM_PROP_VALID_VALUES_ANY = 0,
	WMDM_ENUM_PROP_VALID_VALUES_RANGE = (WMDM_ENUM_PROP_VALID_VALUES_ANY + 1),
	WMDM_ENUM_PROP_VALID_VALUES_ENUM = (WMDM_ENUM_PROP_VALID_VALUES_RANGE + 1)
} WMDM_ENUM_PROP_VALID_VALUES_FORM;
typedef struct _WMDM_PROP_VALUES_RANGE
{
	PROPVARIANT rangeMin;
	PROPVARIANT rangeMax;
	PROPVARIANT rangeStep;
} WMDM_PROP_VALUES_RANGE;
typedef struct _WMDM_PROP_VALUES_ENUM
{
	UINT cEnumValues;
	PROPVARIANT *pValues;
} WMDM_PROP_VALUES_ENUM;
typedef struct _WMDM_PROP_DESC
{
	LPWSTR pwszPropName;
	WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
	union
{
		WMDM_PROP_VALUES_RANGE ValidValuesRange;
		WMDM_PROP_VALUES_ENUM EnumeratedValidValues;
	} ValidValues;
} WMDM_PROP_DESC;
typedef struct _WMDM_PROP_CONFIG
{
	UINT nPreference;
	UINT nPropDesc;
	WMDM_PROP_DESC *pPropDesc;
} WMDM_PROP_CONFIG;
typedef struct _WMDM_FORMAT_CAPABILITY
{
	UINT nPropConfig;
	WMDM_PROP_CONFIG *pConfigs;
} WMDM_FORMAT_CAPABILITY;
#define	WMDM_MAC_LENGTH	( 8 )
typedef enum tagWMDM_FIND_SCOPE
{
	WMDM_FIND_SCOPE_GLOBAL = 0,
	WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN = (WMDM_FIND_SCOPE_GLOBAL + 1)
} WMDM_FIND_SCOPE;
#define WMDM_S_NOT_ALL_PROPERTIES_APPLIED       0x00045001L
#define WMDM_S_NOT_ALL_PROPERTIES_RETRIEVED     0x00045002L
#define WMDM_E_BUSY                             0x80045000L
#define WMDM_E_INTERFACEDEAD                    0x80045001L
#define WMDM_E_INVALIDTYPE                      0x80045002L
#define WMDM_E_PROCESSFAILED                    0x80045003L
#define WMDM_E_NOTSUPPORTED                     0x80045004L
#define WMDM_E_NOTCERTIFIED                     0x80045005L
#define WMDM_E_NORIGHTS                         0x80045006L
#define WMDM_E_CALL_OUT_OF_SEQUENCE             0x80045007L
#define WMDM_E_BUFFERTOOSMALL                   0x80045008L
#define WMDM_E_MOREDATA                         0x80045009L
#define WMDM_E_MAC_CHECK_FAILED                 0x8004500AL
#define WMDM_E_USER_CANCELLED                   0x8004500BL
#define WMDM_E_SDMI_TRIGGER                     0x8004500CL
#define WMDM_E_SDMI_NOMORECOPIES                0x8004500DL
#define WMDM_E_REVOKED                          0x8004500EL
#define WMDM_E_LICENSE_NOTEXIST                 0x8004500FL
#define WMDM_E_INCORRECT_APPSEC                 0x80045010L
#define WMDM_E_INCORRECT_RIGHTS                 0x80045011L
#define WMDM_E_LICENSE_EXPIRED                  0x80045012L
#define WMDM_E_CANTOPEN_PMSN_SERVICE_PIPE       0x80045013L
#define WMDM_E_TOO_MANY_SESSIONS                0x80045013L
#define WMDM_WMDM_REVOKED                       0x00000001
#define WMDM_APP_REVOKED                        0x00000002
#define WMDM_SP_REVOKED                         0x00000004
#define WMDM_SCP_REVOKED                        0x00000008
#define WMDM_GET_FORMAT_SUPPORT_AUDIO           0x00000001
#define WMDM_GET_FORMAT_SUPPORT_VIDEO           0x00000002
#define WMDM_GET_FORMAT_SUPPORT_FILE            0x00000004
#define WMDM_RIGHTS_PLAYBACKCOUNT               0x00000001
#define WMDM_RIGHTS_EXPIRATIONDATE              0x00000002
#define WMDM_RIGHTS_GROUPID                     0x00000004
#define WMDM_RIGHTS_FREESERIALIDS               0x00000008
#define WMDM_RIGHTS_NAMEDSERIALIDS              0x00000010
#define WMDM_DEVICE_TYPE_PLAYBACK               0x00000001
#define WMDM_DEVICE_TYPE_RECORD                 0x00000002
#define WMDM_DEVICE_TYPE_DECODE                 0x00000004
#define WMDM_DEVICE_TYPE_ENCODE                 0x00000008
#define WMDM_DEVICE_TYPE_STORAGE                0x00000010
#define WMDM_DEVICE_TYPE_VIRTUAL                0x00000020
#define WMDM_DEVICE_TYPE_SDMI                   0x00000040
#define WMDM_DEVICE_TYPE_NONSDMI                0x00000080
#define WMDM_DEVICE_TYPE_NONREENTRANT           0x00000100
#define WMDM_DEVICE_TYPE_FILELISTRESYNC         0x00000200
#define WMDM_DEVICE_TYPE_VIEW_PREF_METADATAVIEW 0x00000400
#define WMDM_POWER_CAP_BATTERY                  0x00000001
#define WMDM_POWER_CAP_EXTERNAL                 0x00000002
#define WMDM_POWER_IS_BATTERY                   0x00000004
#define WMDM_POWER_IS_EXTERNAL                  0x00000008
#define WMDM_POWER_PERCENT_AVAILABLE            0x00000010
#define WMDM_STATUS_READY                       0x00000001
#define WMDM_STATUS_BUSY                        0x00000002
#define WMDM_STATUS_DEVICE_NOTPRESENT           0x00000004
#define WMDM_STATUS_DEVICECONTROL_PLAYING       0x00000008
#define WMDM_STATUS_DEVICECONTROL_RECORDING     0x00000010
#define WMDM_STATUS_DEVICECONTROL_PAUSED        0x00000020
#define WMDM_STATUS_DEVICECONTROL_REMOTE        0x00000040
#define WMDM_STATUS_DEVICECONTROL_STREAM        0x00000080
#define WMDM_STATUS_STORAGE_NOTPRESENT          0x00000100
#define WMDM_STATUS_STORAGE_INITIALIZING        0x00000200
#define WMDM_STATUS_STORAGE_BROKEN              0x00000400
#define WMDM_STATUS_STORAGE_NOTSUPPORTED        0x00000800
#define WMDM_STATUS_STORAGE_UNFORMATTED         0x00001000
#define WMDM_STATUS_STORAGECONTROL_INSERTING    0x00002000
#define WMDM_STATUS_STORAGECONTROL_DELETING     0x00004000
#define WMDM_STATUS_STORAGECONTROL_APPENDING    0x00008000
#define WMDM_STATUS_STORAGECONTROL_MOVING       0x00010000
#define WMDM_STATUS_STORAGECONTROL_READING      0x00020000
#define WMDM_DEVICECAP_CANPLAY                  0x00000001
#define WMDM_DEVICECAP_CANSTREAMPLAY            0x00000002
#define WMDM_DEVICECAP_CANRECORD                0x00000004
#define WMDM_DEVICECAP_CANSTREAMRECORD          0x00000008
#define WMDM_DEVICECAP_CANPAUSE                 0x00000010
#define WMDM_DEVICECAP_CANRESUME                0x00000020
#define WMDM_DEVICECAP_CANSTOP                  0x00000040
#define WMDM_DEVICECAP_CANSEEK                  0x00000080
#define WMDM_DEVICECAP_HASSECURECLOCK           0x00000100
#define WMDM_SEEK_REMOTECONTROL                 0x00000001
#define WMDM_SEEK_STREAMINGAUDIO                0x00000002
#define WMDM_STORAGE_ATTR_FILESYSTEM            0x00000001
#define WMDM_STORAGE_ATTR_REMOVABLE             0x00000002
#define WMDM_STORAGE_ATTR_NONREMOVABLE          0x00000004
#define WMDM_FILE_ATTR_FOLDER                   0x00000008
#define WMDM_FILE_ATTR_LINK                     0x00000010
#define WMDM_FILE_ATTR_FILE                     0x00000020
#define WMDM_FILE_ATTR_VIDEO                    0x00000040
#define WMDM_STORAGE_ATTR_CANEDITMETADATA       0x00000080
#define WMDM_STORAGE_ATTR_FOLDERS               0x00000100
#define WMDM_FILE_ATTR_AUDIO                    0x00001000
#define WMDM_FILE_ATTR_DATA                     0x00002000
#define WMDM_FILE_ATTR_CANPLAY                  0x00004000
#define WMDM_FILE_ATTR_CANDELETE                0x00008000
#define WMDM_FILE_ATTR_CANMOVE                  0x00010000
#define WMDM_FILE_ATTR_CANRENAME                0x00020000
#define WMDM_FILE_ATTR_CANREAD                  0x00040000
#define WMDM_FILE_ATTR_MUSIC                    0x00080000
#define WMDM_FILE_CREATE_OVERWRITE              0x00100000
#define WMDM_FILE_ATTR_AUDIOBOOK                0x00200000
#define WMDM_FILE_ATTR_HIDDEN                   0x00400000
#define WMDM_FILE_ATTR_SYSTEM                   0x00800000
#define WMDM_FILE_ATTR_READONLY                 0x01000000
#define WMDM_STORAGE_ATTR_HAS_FOLDERS           0x02000000
#define WMDM_STORAGE_ATTR_HAS_FILES             0x04000000
#define WMDM_STORAGE_IS_DEFAULT                 0x08000000
#define WMDM_STORAGE_CONTAINS_DEFAULT           0x10000000
#define WMDM_STORAGE_ATTR_VIRTUAL               0x20000000
#define WMDM_STORAGECAP_FOLDERSINROOT           0x00000001
#define WMDM_STORAGECAP_FILESINROOT             0x00000002
#define WMDM_STORAGECAP_FOLDERSINFOLDERS        0x00000004
#define WMDM_STORAGECAP_FILESINFOLDERS          0x00000008
#define WMDM_STORAGECAP_FOLDERLIMITEXISTS       0x00000010
#define WMDM_STORAGECAP_FILELIMITEXISTS         0x00000020
#define WMDM_STORAGECAP_NOT_INITIALIZABLE       0x00000040
#define WMDM_MODE_BLOCK                         0x00000001
#define WMDM_MODE_THREAD                        0x00000002
#define WMDM_CONTENT_FILE                       0x00000004
#define WMDM_CONTENT_FOLDER                     0x00000008
#define WMDM_CONTENT_OPERATIONINTERFACE         0x00000010
#define WMDM_MODE_QUERY                         0x00000020
#define WMDM_MODE_PROGRESS                      0x00000040
#define WMDM_MODE_TRANSFER_PROTECTED            0x00000080
#define WMDM_MODE_TRANSFER_UNPROTECTED          0x00000100
#define WMDM_STORAGECONTROL_INSERTBEFORE        0x00000200
#define WMDM_STORAGECONTROL_INSERTAFTER         0x00000400
#define WMDM_STORAGECONTROL_INSERTINTO          0x00000800
#define WMDM_MODE_RECURSIVE                     0x00001000
#define WMDM_RIGHTS_PLAY_ON_PC                  0x00000001
#define WMDM_RIGHTS_COPY_TO_NON_SDMI_DEVICE     0x00000002
#define WMDM_RIGHTS_COPY_TO_CD                  0x00000008
#define WMDM_RIGHTS_COPY_TO_SDMI_DEVICE         0x00000010
#define WMDM_SEEK_BEGIN                         0x00000001
#define WMDM_SEEK_CURRENT                       0x00000002
#define WMDM_SEEK_END                           0x00000008
#define DO_NOT_VIRTUALIZE_STORAGES_AS_DEVICES   0x00000001
#define ALLOW_OUTOFBAND_NOTIFICATION            0x00000002
enum WMDMMessage
{
	WMDM_MSG_DEVICE_ARRIVAL = 0,
	WMDM_MSG_DEVICE_REMOVAL = (WMDM_MSG_DEVICE_ARRIVAL + 1),
	WMDM_MSG_MEDIA_ARRIVAL = (WMDM_MSG_DEVICE_REMOVAL + 1),
	WMDM_MSG_MEDIA_REMOVAL = (WMDM_MSG_MEDIA_ARRIVAL + 1)
};
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0000_v0_0_s_ifspec;
#ifndef __IWMDMMetaData_INTERFACE_DEFINED__
#define __IWMDMMetaData_INTERFACE_DEFINED__
extern const IID IID_IWMDMMetaData;
typedef struct IWMDMMetaDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMMetaData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMMetaData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMMetaData * This);
	HRESULT(STDMETHODCALLTYPE * AddItem) (IWMDMMetaData * This, WMDM_TAG_DATATYPE Type, LPCWSTR pwszTagName, BYTE * pValue, UINT iLength);
	HRESULT(STDMETHODCALLTYPE * QueryByName) (IWMDMMetaData * This, LPCWSTR pwszTagName, WMDM_TAG_DATATYPE * pType, BYTE ** pValue, UINT * pcbLength);
	HRESULT(STDMETHODCALLTYPE * QueryByIndex) (IWMDMMetaData * This, UINT iIndex, WCHAR ** ppwszName, WMDM_TAG_DATATYPE * pType, BYTE ** ppValue, UINT * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetItemCount) (IWMDMMetaData * This, UINT * iCount);
	END_INTERFACE
}  IWMDMMetaDataVtbl;
interface IWMDMMetaData
{
	CONST_VTBL struct IWMDMMetaDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMMetaData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMMetaData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMMetaData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMMetaData_AddItem(This,Type,pwszTagName,pValue,iLength) ( (This)->lpVtbl -> AddItem(This,Type,pwszTagName,pValue,iLength) )
#define IWMDMMetaData_QueryByName(This,pwszTagName,pType,pValue,pcbLength) ( (This)->lpVtbl -> QueryByName(This,pwszTagName,pType,pValue,pcbLength) )
#define IWMDMMetaData_QueryByIndex(This,iIndex,ppwszName,pType,ppValue,pcbLength) ( (This)->lpVtbl -> QueryByIndex(This,iIndex,ppwszName,pType,ppValue,pcbLength) )
#define IWMDMMetaData_GetItemCount(This,iCount) ( (This)->lpVtbl -> GetItemCount(This,iCount) )
#endif
#endif
#ifndef __IWMDeviceManager_INTERFACE_DEFINED__
#define __IWMDeviceManager_INTERFACE_DEFINED__
extern const IID IID_IWMDeviceManager;
typedef struct IWMDeviceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDeviceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDeviceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDeviceManager * This);
	HRESULT(STDMETHODCALLTYPE * GetRevision) (IWMDeviceManager * This, DWORD * pdwRevision);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IWMDeviceManager * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IWMDeviceManager * This, IWMDMEnumDevice ** ppEnumDevice);
	END_INTERFACE
}  IWMDeviceManagerVtbl;
interface IWMDeviceManager
{
	CONST_VTBL struct IWMDeviceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDeviceManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDeviceManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDeviceManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDeviceManager_GetRevision(This,pdwRevision) ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
#define IWMDeviceManager_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IWMDeviceManager_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#endif
#endif
#ifndef __IWMDeviceManager2_INTERFACE_DEFINED__
#define __IWMDeviceManager2_INTERFACE_DEFINED__
extern const IID IID_IWMDeviceManager2;
typedef struct IWMDeviceManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDeviceManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDeviceManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDeviceManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetRevision) (IWMDeviceManager2 * This, DWORD * pdwRevision);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IWMDeviceManager2 * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IWMDeviceManager2 * This, IWMDMEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * GetDeviceFromCanonicalName) (IWMDeviceManager2 * This, LPCWSTR pwszCanonicalName, IWMDMDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * EnumDevices2) (IWMDeviceManager2 * This, IWMDMEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * Reinitialize) (IWMDeviceManager2 * This);
	END_INTERFACE
}  IWMDeviceManager2Vtbl;
interface IWMDeviceManager2
{
	CONST_VTBL struct IWMDeviceManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDeviceManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDeviceManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDeviceManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDeviceManager2_GetRevision(This,pdwRevision) ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
#define IWMDeviceManager2_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IWMDeviceManager2_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#define IWMDeviceManager2_GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) ( (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) )
#define IWMDeviceManager2_EnumDevices2(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice) )
#define IWMDeviceManager2_Reinitialize(This) ( (This)->lpVtbl -> Reinitialize(This) )
#endif
#endif
#ifndef __IWMDeviceManager3_INTERFACE_DEFINED__
#define __IWMDeviceManager3_INTERFACE_DEFINED__
extern const IID IID_IWMDeviceManager3;
typedef struct IWMDeviceManager3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDeviceManager3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDeviceManager3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDeviceManager3 * This);
	HRESULT(STDMETHODCALLTYPE * GetRevision) (IWMDeviceManager3 * This, DWORD * pdwRevision);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IWMDeviceManager3 * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IWMDeviceManager3 * This, IWMDMEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * GetDeviceFromCanonicalName) (IWMDeviceManager3 * This, LPCWSTR pwszCanonicalName, IWMDMDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * EnumDevices2) (IWMDeviceManager3 * This, IWMDMEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * Reinitialize) (IWMDeviceManager3 * This);
	HRESULT(STDMETHODCALLTYPE * SetDeviceEnumPreference) (IWMDeviceManager3 * This, DWORD dwEnumPref);
	END_INTERFACE
}  IWMDeviceManager3Vtbl;
interface IWMDeviceManager3
{
	CONST_VTBL struct IWMDeviceManager3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDeviceManager3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDeviceManager3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDeviceManager3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDeviceManager3_GetRevision(This,pdwRevision) ( (This)->lpVtbl -> GetRevision(This,pdwRevision) )
#define IWMDeviceManager3_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IWMDeviceManager3_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#define IWMDeviceManager3_GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) ( (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice) )
#define IWMDeviceManager3_EnumDevices2(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice) )
#define IWMDeviceManager3_Reinitialize(This) ( (This)->lpVtbl -> Reinitialize(This) )
#define IWMDeviceManager3_SetDeviceEnumPreference(This,dwEnumPref) ( (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref) )
#endif
#endif
#ifndef __IWMDMStorageGlobals_INTERFACE_DEFINED__
#define __IWMDMStorageGlobals_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorageGlobals;
typedef struct IWMDMStorageGlobalsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorageGlobals * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorageGlobals * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorageGlobals * This);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IWMDMStorageGlobals * This, DWORD * pdwCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IWMDMStorageGlobals * This, PWMDMID pSerialNum, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetTotalSize) (IWMDMStorageGlobals * This, DWORD * pdwTotalSizeLow, DWORD * pdwTotalSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetTotalFree) (IWMDMStorageGlobals * This, DWORD * pdwFreeLow, DWORD * pdwFreeHigh);
	HRESULT(STDMETHODCALLTYPE * GetTotalBad) (IWMDMStorageGlobals * This, DWORD * pdwBadLow, DWORD * pdwBadHigh);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDMStorageGlobals * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWMDMStorageGlobals * This, UINT fuMode, IWMDMProgress * pProgress);
	END_INTERFACE
}  IWMDMStorageGlobalsVtbl;
interface IWMDMStorageGlobals
{
	CONST_VTBL struct IWMDMStorageGlobalsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorageGlobals_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorageGlobals_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorageGlobals_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorageGlobals_GetCapabilities(This,pdwCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
#define IWMDMStorageGlobals_GetSerialNumber(This,pSerialNum,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac) )
#define IWMDMStorageGlobals_GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) ( (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) )
#define IWMDMStorageGlobals_GetTotalFree(This,pdwFreeLow,pdwFreeHigh) ( (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh) )
#define IWMDMStorageGlobals_GetTotalBad(This,pdwBadLow,pdwBadHigh) ( (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh) )
#define IWMDMStorageGlobals_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IWMDMStorageGlobals_Initialize(This,fuMode,pProgress) ( (This)->lpVtbl -> Initialize(This,fuMode,pProgress) )
#endif
#endif
#ifndef __IWMDMStorage_INTERFACE_DEFINED__
#define __IWMDMStorage_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorage;
typedef struct IWMDMStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorage * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IWMDMStorage * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IWMDMStorage * This, IWMDMStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IWMDMStorage * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMStorage * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IWMDMStorage * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IWMDMStorage * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IWMDMStorage * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMStorage * This, IWMDMEnumStorage ** pEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMStorage * This, OPAQUECOMMAND * pCommand);
	END_INTERFACE
}  IWMDMStorageVtbl;
interface IWMDMStorage
{
	CONST_VTBL struct IWMDMStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorage_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IWMDMStorage_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IWMDMStorage_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IWMDMStorage_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMStorage_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IWMDMStorage_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IWMDMStorage_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IWMDMStorage_EnumStorage(This,pEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
#define IWMDMStorage_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#endif
#endif
#ifndef __IWMDMStorage2_INTERFACE_DEFINED__
#define __IWMDMStorage2_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorage2;
typedef struct IWMDMStorage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorage2 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IWMDMStorage2 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IWMDMStorage2 * This, IWMDMStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IWMDMStorage2 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMStorage2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IWMDMStorage2 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IWMDMStorage2 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IWMDMStorage2 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMStorage2 * This, IWMDMEnumStorage ** pEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMStorage2 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IWMDMStorage2 * This, LPCWSTR pszStorageName, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IWMDMStorage2 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IWMDMStorage2 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	END_INTERFACE
}  IWMDMStorage2Vtbl;
interface IWMDMStorage2
{
	CONST_VTBL struct IWMDMStorage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorage2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorage2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorage2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorage2_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IWMDMStorage2_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IWMDMStorage2_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IWMDMStorage2_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMStorage2_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IWMDMStorage2_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IWMDMStorage2_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IWMDMStorage2_EnumStorage(This,pEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
#define IWMDMStorage2_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IWMDMStorage2_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IWMDMStorage2_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
#define IWMDMStorage2_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#endif
#endif
#ifndef __IWMDMStorage3_INTERFACE_DEFINED__
#define __IWMDMStorage3_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorage3;
typedef struct IWMDMStorage3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorage3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorage3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorage3 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IWMDMStorage3 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IWMDMStorage3 * This, IWMDMStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IWMDMStorage3 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMStorage3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IWMDMStorage3 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IWMDMStorage3 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IWMDMStorage3 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMStorage3 * This, IWMDMEnumStorage ** pEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMStorage3 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IWMDMStorage3 * This, LPCWSTR pszStorageName, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IWMDMStorage3 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IWMDMStorage3 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IWMDMStorage3 * This, IWMDMMetaData ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IWMDMStorage3 * This, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * CreateEmptyMetadataObject) (IWMDMStorage3 * This, IWMDMMetaData ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetEnumPreference) (IWMDMStorage3 * This, WMDM_STORAGE_ENUM_MODE * pMode, DWORD nViews, WMDMMetadataView * pViews);
	END_INTERFACE
}  IWMDMStorage3Vtbl;
interface IWMDMStorage3
{
	CONST_VTBL struct IWMDMStorage3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorage3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorage3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorage3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorage3_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IWMDMStorage3_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IWMDMStorage3_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IWMDMStorage3_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMStorage3_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IWMDMStorage3_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IWMDMStorage3_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IWMDMStorage3_EnumStorage(This,pEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
#define IWMDMStorage3_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IWMDMStorage3_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IWMDMStorage3_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
#define IWMDMStorage3_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#define IWMDMStorage3_GetMetadata(This,ppMetadata) ( (This)->lpVtbl -> GetMetadata(This,ppMetadata) )
#define IWMDMStorage3_SetMetadata(This,pMetadata) ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
#define IWMDMStorage3_CreateEmptyMetadataObject(This,ppMetadata) ( (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata) )
#define IWMDMStorage3_SetEnumPreference(This,pMode,nViews,pViews) ( (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews) )
#endif
#endif
#ifndef __IWMDMStorage4_INTERFACE_DEFINED__
#define __IWMDMStorage4_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorage4;
typedef struct IWMDMStorage4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorage4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorage4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorage4 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IWMDMStorage4 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IWMDMStorage4 * This, IWMDMStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IWMDMStorage4 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMStorage4 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IWMDMStorage4 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IWMDMStorage4 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IWMDMStorage4 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMStorage4 * This, IWMDMEnumStorage ** pEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMStorage4 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IWMDMStorage4 * This, LPCWSTR pszStorageName, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IWMDMStorage4 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IWMDMStorage4 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IWMDMStorage4 * This, IWMDMMetaData ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IWMDMStorage4 * This, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * CreateEmptyMetadataObject) (IWMDMStorage4 * This, IWMDMMetaData ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetEnumPreference) (IWMDMStorage4 * This, WMDM_STORAGE_ENUM_MODE * pMode, DWORD nViews, WMDMMetadataView * pViews);
	HRESULT(STDMETHODCALLTYPE * SetReferences) (IWMDMStorage4 * This, DWORD dwRefs, IWMDMStorage ** ppIWMDMStorage);
	HRESULT(STDMETHODCALLTYPE * GetReferences) (IWMDMStorage4 * This, DWORD * pdwRefs, IWMDMStorage *** pppIWMDMStorage);
	HRESULT(STDMETHODCALLTYPE * GetRightsWithProgress) (IWMDMStorage4 * This, IWMDMProgress3 * pIProgressCallback, PWMDMRIGHTS * ppRights, UINT * pnRightsCount);
	HRESULT(STDMETHODCALLTYPE * GetSpecifiedMetadata) (IWMDMStorage4 * This, DWORD cProperties, LPCWSTR * ppwszPropNames, IWMDMMetaData ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * FindStorage) (IWMDMStorage4 * This, WMDM_FIND_SCOPE findScope, LPCWSTR pwszUniqueID, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IWMDMStorage4 * This, IWMDMStorage ** ppStorage);
	END_INTERFACE
}  IWMDMStorage4Vtbl;
interface IWMDMStorage4
{
	CONST_VTBL struct IWMDMStorage4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorage4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorage4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorage4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorage4_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IWMDMStorage4_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IWMDMStorage4_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IWMDMStorage4_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMStorage4_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IWMDMStorage4_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IWMDMStorage4_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IWMDMStorage4_EnumStorage(This,pEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,pEnumStorage) )
#define IWMDMStorage4_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IWMDMStorage4_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IWMDMStorage4_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
#define IWMDMStorage4_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#define IWMDMStorage4_GetMetadata(This,ppMetadata) ( (This)->lpVtbl -> GetMetadata(This,ppMetadata) )
#define IWMDMStorage4_SetMetadata(This,pMetadata) ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
#define IWMDMStorage4_CreateEmptyMetadataObject(This,ppMetadata) ( (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata) )
#define IWMDMStorage4_SetEnumPreference(This,pMode,nViews,pViews) ( (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews) )
#define IWMDMStorage4_SetReferences(This,dwRefs,ppIWMDMStorage) ( (This)->lpVtbl -> SetReferences(This,dwRefs,ppIWMDMStorage) )
#define IWMDMStorage4_GetReferences(This,pdwRefs,pppIWMDMStorage) ( (This)->lpVtbl -> GetReferences(This,pdwRefs,pppIWMDMStorage) )
#define IWMDMStorage4_GetRightsWithProgress(This,pIProgressCallback,ppRights,pnRightsCount) ( (This)->lpVtbl -> GetRightsWithProgress(This,pIProgressCallback,ppRights,pnRightsCount) )
#define IWMDMStorage4_GetSpecifiedMetadata(This,cProperties,ppwszPropNames,ppMetadata) ( (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,ppMetadata) )
#define IWMDMStorage4_FindStorage(This,findScope,pwszUniqueID,ppStorage) ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
#define IWMDMStorage4_GetParent(This,ppStorage) ( (This)->lpVtbl -> GetParent(This,ppStorage) )
#endif
#endif
#ifndef __IWMDMOperation_INTERFACE_DEFINED__
#define __IWMDMOperation_INTERFACE_DEFINED__
extern const IID IID_IWMDMOperation;
typedef struct IWMDMOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMOperation * This);
	HRESULT(STDMETHODCALLTYPE * BeginRead) (IWMDMOperation * This);
	HRESULT(STDMETHODCALLTYPE * BeginWrite) (IWMDMOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectName) (IWMDMOperation * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * SetObjectName) (IWMDMOperation * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetObjectAttributes) (IWMDMOperation * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetObjectAttributes) (IWMDMOperation * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetObjectTotalSize) (IWMDMOperation * This, DWORD * pdwSize, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * SetObjectTotalSize) (IWMDMOperation * This, DWORD dwSize, DWORD dwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * TransferObjectData) (IWMDMOperation * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMOperation * This, HRESULT * phCompletionCode, IUnknown * pNewObject);
	END_INTERFACE
}  IWMDMOperationVtbl;
interface IWMDMOperation
{
	CONST_VTBL struct IWMDMOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMOperation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMOperation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMOperation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMOperation_BeginRead(This) ( (This)->lpVtbl -> BeginRead(This) )
#define IWMDMOperation_BeginWrite(This) ( (This)->lpVtbl -> BeginWrite(This) )
#define IWMDMOperation_GetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation_SetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation_GetObjectAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
#define IWMDMOperation_SetObjectAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
#define IWMDMOperation_GetObjectTotalSize(This,pdwSize,pdwSizeHigh) ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
#define IWMDMOperation_SetObjectTotalSize(This,dwSize,dwSizeHigh) ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
#define IWMDMOperation_TransferObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
#define IWMDMOperation_End(This,phCompletionCode,pNewObject) ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
#endif
#endif
#ifndef __IWMDMOperation2_INTERFACE_DEFINED__
#define __IWMDMOperation2_INTERFACE_DEFINED__
extern const IID IID_IWMDMOperation2;
typedef struct IWMDMOperation2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMOperation2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMOperation2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMOperation2 * This);
	HRESULT(STDMETHODCALLTYPE * BeginRead) (IWMDMOperation2 * This);
	HRESULT(STDMETHODCALLTYPE * BeginWrite) (IWMDMOperation2 * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectName) (IWMDMOperation2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * SetObjectName) (IWMDMOperation2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetObjectAttributes) (IWMDMOperation2 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetObjectAttributes) (IWMDMOperation2 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetObjectTotalSize) (IWMDMOperation2 * This, DWORD * pdwSize, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * SetObjectTotalSize) (IWMDMOperation2 * This, DWORD dwSize, DWORD dwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * TransferObjectData) (IWMDMOperation2 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMOperation2 * This, HRESULT * phCompletionCode, IUnknown * pNewObject);
	HRESULT(STDMETHODCALLTYPE * SetObjectAttributes2) (IWMDMOperation2 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetObjectAttributes2) (IWMDMOperation2 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	END_INTERFACE
}  IWMDMOperation2Vtbl;
interface IWMDMOperation2
{
	CONST_VTBL struct IWMDMOperation2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMOperation2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMOperation2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMOperation2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMOperation2_BeginRead(This) ( (This)->lpVtbl -> BeginRead(This) )
#define IWMDMOperation2_BeginWrite(This) ( (This)->lpVtbl -> BeginWrite(This) )
#define IWMDMOperation2_GetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation2_SetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation2_GetObjectAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
#define IWMDMOperation2_SetObjectAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
#define IWMDMOperation2_GetObjectTotalSize(This,pdwSize,pdwSizeHigh) ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
#define IWMDMOperation2_SetObjectTotalSize(This,dwSize,dwSizeHigh) ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
#define IWMDMOperation2_TransferObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
#define IWMDMOperation2_End(This,phCompletionCode,pNewObject) ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
#define IWMDMOperation2_SetObjectAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) ( (This)->lpVtbl -> SetObjectAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat) )
#define IWMDMOperation2_GetObjectAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetObjectAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#endif
#endif
#ifndef __IWMDMOperation3_INTERFACE_DEFINED__
#define __IWMDMOperation3_INTERFACE_DEFINED__
extern const IID IID_IWMDMOperation3;
typedef struct IWMDMOperation3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMOperation3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMOperation3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMOperation3 * This);
	HRESULT(STDMETHODCALLTYPE * BeginRead) (IWMDMOperation3 * This);
	HRESULT(STDMETHODCALLTYPE * BeginWrite) (IWMDMOperation3 * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectName) (IWMDMOperation3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * SetObjectName) (IWMDMOperation3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetObjectAttributes) (IWMDMOperation3 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetObjectAttributes) (IWMDMOperation3 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetObjectTotalSize) (IWMDMOperation3 * This, DWORD * pdwSize, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * SetObjectTotalSize) (IWMDMOperation3 * This, DWORD dwSize, DWORD dwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * TransferObjectData) (IWMDMOperation3 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMOperation3 * This, HRESULT * phCompletionCode, IUnknown * pNewObject);
	HRESULT(STDMETHODCALLTYPE * TransferObjectDataOnClearChannel) (IWMDMOperation3 * This, BYTE * pData, DWORD * pdwSize);
	END_INTERFACE
}  IWMDMOperation3Vtbl;
interface IWMDMOperation3
{
	CONST_VTBL struct IWMDMOperation3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMOperation3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMOperation3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMOperation3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMOperation3_BeginRead(This) ( (This)->lpVtbl -> BeginRead(This) )
#define IWMDMOperation3_BeginWrite(This) ( (This)->lpVtbl -> BeginWrite(This) )
#define IWMDMOperation3_GetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation3_SetObjectName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars) )
#define IWMDMOperation3_GetObjectAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat) )
#define IWMDMOperation3_SetObjectAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat) )
#define IWMDMOperation3_GetObjectTotalSize(This,pdwSize,pdwSizeHigh) ( (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh) )
#define IWMDMOperation3_SetObjectTotalSize(This,dwSize,dwSizeHigh) ( (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh) )
#define IWMDMOperation3_TransferObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac) )
#define IWMDMOperation3_End(This,phCompletionCode,pNewObject) ( (This)->lpVtbl -> End(This,phCompletionCode,pNewObject) )
#define IWMDMOperation3_TransferObjectDataOnClearChannel(This,pData,pdwSize) ( (This)->lpVtbl -> TransferObjectDataOnClearChannel(This,pData,pdwSize) )
#endif
#endif
#ifndef __IWMDMProgress_INTERFACE_DEFINED__
#define __IWMDMProgress_INTERFACE_DEFINED__
extern const IID IID_IWMDMProgress;
typedef struct IWMDMProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMProgress * This);
	HRESULT(STDMETHODCALLTYPE * Begin) (IWMDMProgress * This, DWORD dwEstimatedTicks);
	HRESULT(STDMETHODCALLTYPE * Progress) (IWMDMProgress * This, DWORD dwTranspiredTicks);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMProgress * This);
	END_INTERFACE
}  IWMDMProgressVtbl;
interface IWMDMProgress
{
	CONST_VTBL struct IWMDMProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMProgress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMProgress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMProgress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMProgress_Begin(This,dwEstimatedTicks) ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
#define IWMDMProgress_Progress(This,dwTranspiredTicks) ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
#define IWMDMProgress_End(This) ( (This)->lpVtbl -> End(This) )
#endif
#endif
#ifndef __IWMDMProgress2_INTERFACE_DEFINED__
#define __IWMDMProgress2_INTERFACE_DEFINED__
extern const IID IID_IWMDMProgress2;
typedef struct IWMDMProgress2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMProgress2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMProgress2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMProgress2 * This);
	HRESULT(STDMETHODCALLTYPE * Begin) (IWMDMProgress2 * This, DWORD dwEstimatedTicks);
	HRESULT(STDMETHODCALLTYPE * Progress) (IWMDMProgress2 * This, DWORD dwTranspiredTicks);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMProgress2 * This);
	HRESULT(STDMETHODCALLTYPE * End2) (IWMDMProgress2 * This, HRESULT hrCompletionCode);
	END_INTERFACE
}  IWMDMProgress2Vtbl;
interface IWMDMProgress2
{
	CONST_VTBL struct IWMDMProgress2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMProgress2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMProgress2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMProgress2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMProgress2_Begin(This,dwEstimatedTicks) ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
#define IWMDMProgress2_Progress(This,dwTranspiredTicks) ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
#define IWMDMProgress2_End(This) ( (This)->lpVtbl -> End(This) )
#define IWMDMProgress2_End2(This,hrCompletionCode) ( (This)->lpVtbl -> End2(This,hrCompletionCode) )
#endif
#endif
#ifndef __IWMDMProgress3_INTERFACE_DEFINED__
#define __IWMDMProgress3_INTERFACE_DEFINED__
extern const IID IID_IWMDMProgress3;
typedef struct IWMDMProgress3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMProgress3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMProgress3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMProgress3 * This);
	HRESULT(STDMETHODCALLTYPE * Begin) (IWMDMProgress3 * This, DWORD dwEstimatedTicks);
	HRESULT(STDMETHODCALLTYPE * Progress) (IWMDMProgress3 * This, DWORD dwTranspiredTicks);
	HRESULT(STDMETHODCALLTYPE * End) (IWMDMProgress3 * This);
	HRESULT(STDMETHODCALLTYPE * End2) (IWMDMProgress3 * This, HRESULT hrCompletionCode);
	HRESULT(STDMETHODCALLTYPE * Begin3) (IWMDMProgress3 * This, GUID EventId, DWORD dwEstimatedTicks, OPAQUECOMMAND * pContext);
	HRESULT(STDMETHODCALLTYPE * Progress3) (IWMDMProgress3 * This, GUID EventId, DWORD dwTranspiredTicks, OPAQUECOMMAND * pContext);
	HRESULT(STDMETHODCALLTYPE * End3) (IWMDMProgress3 * This, GUID EventId, HRESULT hrCompletionCode, OPAQUECOMMAND * pContext);
	END_INTERFACE
}  IWMDMProgress3Vtbl;
interface IWMDMProgress3
{
	CONST_VTBL struct IWMDMProgress3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMProgress3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMProgress3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMProgress3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMProgress3_Begin(This,dwEstimatedTicks) ( (This)->lpVtbl -> Begin(This,dwEstimatedTicks) )
#define IWMDMProgress3_Progress(This,dwTranspiredTicks) ( (This)->lpVtbl -> Progress(This,dwTranspiredTicks) )
#define IWMDMProgress3_End(This) ( (This)->lpVtbl -> End(This) )
#define IWMDMProgress3_End2(This,hrCompletionCode) ( (This)->lpVtbl -> End2(This,hrCompletionCode) )
#define IWMDMProgress3_Begin3(This,EventId,dwEstimatedTicks,pContext) ( (This)->lpVtbl -> Begin3(This,EventId,dwEstimatedTicks,pContext) )
#define IWMDMProgress3_Progress3(This,EventId,dwTranspiredTicks,pContext) ( (This)->lpVtbl -> Progress3(This,EventId,dwTranspiredTicks,pContext) )
#define IWMDMProgress3_End3(This,EventId,hrCompletionCode,pContext) ( (This)->lpVtbl -> End3(This,EventId,hrCompletionCode,pContext) )
#endif
#endif
#ifndef __IWMDMDevice_INTERFACE_DEFINED__
#define __IWMDMDevice_INTERFACE_DEFINED__
extern const IID IID_IWMDMDevice;
typedef struct IWMDMDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMDevice * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IWMDMDevice * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMDMDevice * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMDMDevice * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IWMDMDevice * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IWMDMDevice * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDMDevice * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IWMDMDevice * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMDevice * This, IWMDMEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IWMDMDevice * This, _WAVEFORMATEX ** ppFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMDevice * This, OPAQUECOMMAND * pCommand);
	END_INTERFACE
}  IWMDMDeviceVtbl;
interface IWMDMDevice
{
	CONST_VTBL struct IWMDMDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMDevice_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMDevice_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IWMDMDevice_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IWMDMDevice_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IWMDMDevice_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IWMDMDevice_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IWMDMDevice_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IWMDMDevice_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IWMDMDevice_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IWMDMDevice_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IWMDMDevice_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#endif
#endif
#ifndef __IWMDMDevice2_INTERFACE_DEFINED__
#define __IWMDMDevice2_INTERFACE_DEFINED__
extern const IID IID_IWMDMDevice2;
typedef struct IWMDMDevice2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMDevice2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMDevice2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMDevice2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IWMDMDevice2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMDMDevice2 * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMDMDevice2 * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IWMDMDevice2 * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IWMDMDevice2 * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDMDevice2 * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IWMDMDevice2 * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMDevice2 * This, IWMDMEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IWMDMDevice2 * This, _WAVEFORMATEX ** ppFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMDevice2 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IWMDMDevice2 * This, LPCWSTR pszStorageName, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport2) (IWMDMDevice2 * This, DWORD dwFlags, _WAVEFORMATEX ** ppAudioFormatEx, UINT * pnAudioFormatCount, _VIDEOINFOHEADER ** ppVideoFormatEx, UINT * pnVideoFormatCount, WMFILECAPABILITIES ** ppFileType, UINT * pnFileTypeCount);
	HRESULT(STDMETHODCALLTYPE * GetSpecifyPropertyPages) (IWMDMDevice2 * This, ISpecifyPropertyPages ** ppSpecifyPropPages, IUnknown *** pppUnknowns, ULONG * pcUnks);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IWMDMDevice2 * This, LPWSTR pwszPnPName, UINT nMaxChars);
	END_INTERFACE
}  IWMDMDevice2Vtbl;
interface IWMDMDevice2
{
	CONST_VTBL struct IWMDMDevice2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMDevice2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMDevice2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMDevice2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMDevice2_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMDevice2_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IWMDMDevice2_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IWMDMDevice2_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IWMDMDevice2_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IWMDMDevice2_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IWMDMDevice2_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IWMDMDevice2_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IWMDMDevice2_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IWMDMDevice2_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IWMDMDevice2_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IWMDMDevice2_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IWMDMDevice2_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
#define IWMDMDevice2_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
#define IWMDMDevice2_GetCanonicalName(This,pwszPnPName,nMaxChars) ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
#endif
#endif
#ifndef __IWMDMDevice3_INTERFACE_DEFINED__
#define __IWMDMDevice3_INTERFACE_DEFINED__
extern const IID IID_IWMDMDevice3;
typedef struct IWMDMDevice3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMDevice3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMDevice3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMDMDevice3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IWMDMDevice3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IWMDMDevice3 * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IWMDMDevice3 * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IWMDMDevice3 * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IWMDMDevice3 * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDMDevice3 * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IWMDMDevice3 * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IWMDMDevice3 * This, IWMDMEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IWMDMDevice3 * This, _WAVEFORMATEX ** ppFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IWMDMDevice3 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IWMDMDevice3 * This, LPCWSTR pszStorageName, IWMDMStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport2) (IWMDMDevice3 * This, DWORD dwFlags, _WAVEFORMATEX ** ppAudioFormatEx, UINT * pnAudioFormatCount, _VIDEOINFOHEADER ** ppVideoFormatEx, UINT * pnVideoFormatCount, WMFILECAPABILITIES ** ppFileType, UINT * pnFileTypeCount);
	HRESULT(STDMETHODCALLTYPE * GetSpecifyPropertyPages) (IWMDMDevice3 * This, ISpecifyPropertyPages ** ppSpecifyPropPages, IUnknown *** pppUnknowns, ULONG * pcUnks);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IWMDMDevice3 * This, LPWSTR pwszPnPName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IWMDMDevice3 * This, LPCWSTR pwszPropName, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IWMDMDevice3 * This, LPCWSTR pwszPropName, const PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetFormatCapability) (IWMDMDevice3 * This, WMDM_FORMATCODE format, WMDM_FORMAT_CAPABILITY * pFormatSupport);
	HRESULT(STDMETHODCALLTYPE * DeviceIoControl) (IWMDMDevice3 * This, DWORD dwIoControlCode, BYTE * lpInBuffer, DWORD nInBufferSize, BYTE * lpOutBuffer, LPDWORD pnOutBufferSize);
	HRESULT(STDMETHODCALLTYPE * FindStorage) (IWMDMDevice3 * This, WMDM_FIND_SCOPE findScope, LPCWSTR pwszUniqueID, IWMDMStorage ** ppStorage);
	END_INTERFACE
}  IWMDMDevice3Vtbl;
interface IWMDMDevice3
{
	CONST_VTBL struct IWMDMDevice3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMDevice3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMDevice3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMDevice3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMDevice3_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IWMDMDevice3_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IWMDMDevice3_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IWMDMDevice3_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IWMDMDevice3_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IWMDMDevice3_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IWMDMDevice3_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IWMDMDevice3_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IWMDMDevice3_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IWMDMDevice3_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IWMDMDevice3_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IWMDMDevice3_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IWMDMDevice3_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
#define IWMDMDevice3_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
#define IWMDMDevice3_GetCanonicalName(This,pwszPnPName,nMaxChars) ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
#define IWMDMDevice3_GetProperty(This,pwszPropName,pValue) ( (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue) )
#define IWMDMDevice3_SetProperty(This,pwszPropName,pValue) ( (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue) )
#define IWMDMDevice3_GetFormatCapability(This,format,pFormatSupport) ( (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport) )
#define IWMDMDevice3_DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) ( (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) )
#define IWMDMDevice3_FindStorage(This,findScope,pwszUniqueID,ppStorage) ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
#endif
#endif
#ifndef __IWMDMDeviceSession_INTERFACE_DEFINED__
#define __IWMDMDeviceSession_INTERFACE_DEFINED__
extern const IID IID_IWMDMDeviceSession;
typedef struct IWMDMDeviceSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMDeviceSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMDeviceSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMDeviceSession * This);
	HRESULT(STDMETHODCALLTYPE * BeginSession) (IWMDMDeviceSession * This, WMDM_SESSION_TYPE type, BYTE * pCtx, DWORD dwSizeCtx);
	HRESULT(STDMETHODCALLTYPE * EndSession) (IWMDMDeviceSession * This, WMDM_SESSION_TYPE type, BYTE * pCtx, DWORD dwSizeCtx);
	END_INTERFACE
}  IWMDMDeviceSessionVtbl;
interface IWMDMDeviceSession
{
	CONST_VTBL struct IWMDMDeviceSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMDeviceSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMDeviceSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMDeviceSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMDeviceSession_BeginSession(This,type,pCtx,dwSizeCtx) ( (This)->lpVtbl -> BeginSession(This,type,pCtx,dwSizeCtx) )
#define IWMDMDeviceSession_EndSession(This,type,pCtx,dwSizeCtx) ( (This)->lpVtbl -> EndSession(This,type,pCtx,dwSizeCtx) )
#endif
#endif
#ifndef __IWMDMEnumDevice_INTERFACE_DEFINED__
#define __IWMDMEnumDevice_INTERFACE_DEFINED__
extern const IID IID_IWMDMEnumDevice;
typedef struct IWMDMEnumDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMEnumDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMEnumDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMEnumDevice * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IWMDMEnumDevice * This, ULONG celt, IWMDMDevice ** ppDevice, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IWMDMEnumDevice * This, ULONG celt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IWMDMEnumDevice * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWMDMEnumDevice * This, IWMDMEnumDevice ** ppEnumDevice);
	END_INTERFACE
}  IWMDMEnumDeviceVtbl;
interface IWMDMEnumDevice
{
	CONST_VTBL struct IWMDMEnumDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMEnumDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMEnumDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMEnumDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMEnumDevice_Next(This,celt,ppDevice,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched) )
#define IWMDMEnumDevice_Skip(This,celt,pceltFetched) ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
#define IWMDMEnumDevice_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMDMEnumDevice_Clone(This,ppEnumDevice) ( (This)->lpVtbl -> Clone(This,ppEnumDevice) )
#endif
#endif
#ifndef __IWMDMDeviceControl_INTERFACE_DEFINED__
#define __IWMDMDeviceControl_INTERFACE_DEFINED__
extern const IID IID_IWMDMDeviceControl;
typedef struct IWMDMDeviceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMDeviceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMDeviceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDMDeviceControl * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IWMDMDeviceControl * This, DWORD * pdwCapabilitiesMask);
	HRESULT(STDMETHODCALLTYPE * Play) (IWMDMDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Record) (IWMDMDeviceControl * This, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * Pause) (IWMDMDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IWMDMDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWMDMDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Seek) (IWMDMDeviceControl * This, UINT fuMode, int nOffset);
	END_INTERFACE
}  IWMDMDeviceControlVtbl;
interface IWMDMDeviceControl
{
	CONST_VTBL struct IWMDMDeviceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMDeviceControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMDeviceControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMDeviceControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMDeviceControl_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IWMDMDeviceControl_GetCapabilities(This,pdwCapabilitiesMask) ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask) )
#define IWMDMDeviceControl_Play(This) ( (This)->lpVtbl -> Play(This) )
#define IWMDMDeviceControl_Record(This,pFormat) ( (This)->lpVtbl -> Record(This,pFormat) )
#define IWMDMDeviceControl_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IWMDMDeviceControl_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IWMDMDeviceControl_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IWMDMDeviceControl_Seek(This,fuMode,nOffset) ( (This)->lpVtbl -> Seek(This,fuMode,nOffset) )
#endif
#endif
#ifndef __IWMDMEnumStorage_INTERFACE_DEFINED__
#define __IWMDMEnumStorage_INTERFACE_DEFINED__
extern const IID IID_IWMDMEnumStorage;
typedef struct IWMDMEnumStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMEnumStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMEnumStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMEnumStorage * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IWMDMEnumStorage * This, ULONG celt, IWMDMStorage ** ppStorage, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IWMDMEnumStorage * This, ULONG celt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IWMDMEnumStorage * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWMDMEnumStorage * This, IWMDMEnumStorage ** ppEnumStorage);
	END_INTERFACE
}  IWMDMEnumStorageVtbl;
interface IWMDMEnumStorage
{
	CONST_VTBL struct IWMDMEnumStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMEnumStorage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMEnumStorage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMEnumStorage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMEnumStorage_Next(This,celt,ppStorage,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched) )
#define IWMDMEnumStorage_Skip(This,celt,pceltFetched) ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
#define IWMDMEnumStorage_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMDMEnumStorage_Clone(This,ppEnumStorage) ( (This)->lpVtbl -> Clone(This,ppEnumStorage) )
#endif
#endif
#ifndef __IWMDMStorageControl_INTERFACE_DEFINED__
#define __IWMDMStorageControl_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorageControl;
typedef struct IWMDMStorageControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorageControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorageControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorageControl * This);
	HRESULT(STDMETHODCALLTYPE * Insert) (IWMDMStorageControl * This, UINT fuMode, LPWSTR pwszFile, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IWMDMStorage ** ppNewObject);
	HRESULT(STDMETHODCALLTYPE * Delete) (IWMDMStorageControl * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Rename) (IWMDMStorageControl * This, UINT fuMode, LPWSTR pwszNewName, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMDMStorageControl * This, UINT fuMode, LPWSTR pwszFile, IWMDMProgress * pProgress, IWMDMOperation * pOperation);
	HRESULT(STDMETHODCALLTYPE * Move) (IWMDMStorageControl * This, UINT fuMode, IWMDMStorage * pTargetObject, IWMDMProgress * pProgress);
	END_INTERFACE
}  IWMDMStorageControlVtbl;
interface IWMDMStorageControl
{
	CONST_VTBL struct IWMDMStorageControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorageControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorageControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorageControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorageControl_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
#define IWMDMStorageControl_Delete(This,fuMode,pProgress) ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
#define IWMDMStorageControl_Rename(This,fuMode,pwszNewName,pProgress) ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
#define IWMDMStorageControl_Read(This,fuMode,pwszFile,pProgress,pOperation) ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
#define IWMDMStorageControl_Move(This,fuMode,pTargetObject,pProgress) ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
#endif
#endif
#ifndef __IWMDMStorageControl2_INTERFACE_DEFINED__
#define __IWMDMStorageControl2_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorageControl2;
typedef struct IWMDMStorageControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorageControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorageControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorageControl2 * This);
	HRESULT(STDMETHODCALLTYPE * Insert) (IWMDMStorageControl2 * This, UINT fuMode, LPWSTR pwszFile, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IWMDMStorage ** ppNewObject);
	HRESULT(STDMETHODCALLTYPE * Delete) (IWMDMStorageControl2 * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Rename) (IWMDMStorageControl2 * This, UINT fuMode, LPWSTR pwszNewName, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMDMStorageControl2 * This, UINT fuMode, LPWSTR pwszFile, IWMDMProgress * pProgress, IWMDMOperation * pOperation);
	HRESULT(STDMETHODCALLTYPE * Move) (IWMDMStorageControl2 * This, UINT fuMode, IWMDMStorage * pTargetObject, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Insert2) (IWMDMStorageControl2 * This, UINT fuMode, LPWSTR pwszFileSource, LPWSTR pwszFileDest, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IUnknown * pUnknown, IWMDMStorage ** ppNewObject);
	END_INTERFACE
}  IWMDMStorageControl2Vtbl;
interface IWMDMStorageControl2
{
	CONST_VTBL struct IWMDMStorageControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorageControl2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorageControl2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorageControl2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorageControl2_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
#define IWMDMStorageControl2_Delete(This,fuMode,pProgress) ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
#define IWMDMStorageControl2_Rename(This,fuMode,pwszNewName,pProgress) ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
#define IWMDMStorageControl2_Read(This,fuMode,pwszFile,pProgress,pOperation) ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
#define IWMDMStorageControl2_Move(This,fuMode,pTargetObject,pProgress) ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
#define IWMDMStorageControl2_Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) ( (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) )
#endif
#endif
#ifndef __IWMDMStorageControl3_INTERFACE_DEFINED__
#define __IWMDMStorageControl3_INTERFACE_DEFINED__
extern const IID IID_IWMDMStorageControl3;
typedef struct IWMDMStorageControl3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMStorageControl3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMStorageControl3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMStorageControl3 * This);
	HRESULT(STDMETHODCALLTYPE * Insert) (IWMDMStorageControl3 * This, UINT fuMode, LPWSTR pwszFile, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IWMDMStorage ** ppNewObject);
	HRESULT(STDMETHODCALLTYPE * Delete) (IWMDMStorageControl3 * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Rename) (IWMDMStorageControl3 * This, UINT fuMode, LPWSTR pwszNewName, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMDMStorageControl3 * This, UINT fuMode, LPWSTR pwszFile, IWMDMProgress * pProgress, IWMDMOperation * pOperation);
	HRESULT(STDMETHODCALLTYPE * Move) (IWMDMStorageControl3 * This, UINT fuMode, IWMDMStorage * pTargetObject, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Insert2) (IWMDMStorageControl3 * This, UINT fuMode, LPWSTR pwszFileSource, LPWSTR pwszFileDest, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IUnknown * pUnknown, IWMDMStorage ** ppNewObject);
	HRESULT(STDMETHODCALLTYPE * Insert3) (IWMDMStorageControl3 * This, UINT fuMode, UINT fuType, LPWSTR pwszFileSource, LPWSTR pwszFileDest, IWMDMOperation * pOperation, IWMDMProgress * pProgress, IWMDMMetaData * pMetaData, IUnknown * pUnknown, IWMDMStorage ** ppNewObject);
	END_INTERFACE
}  IWMDMStorageControl3Vtbl;
interface IWMDMStorageControl3
{
	CONST_VTBL struct IWMDMStorageControl3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMStorageControl3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMStorageControl3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMStorageControl3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMStorageControl3_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) ( (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject) )
#define IWMDMStorageControl3_Delete(This,fuMode,pProgress) ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
#define IWMDMStorageControl3_Rename(This,fuMode,pwszNewName,pProgress) ( (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress) )
#define IWMDMStorageControl3_Read(This,fuMode,pwszFile,pProgress,pOperation) ( (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation) )
#define IWMDMStorageControl3_Move(This,fuMode,pTargetObject,pProgress) ( (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress) )
#define IWMDMStorageControl3_Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) ( (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject) )
#define IWMDMStorageControl3_Insert3(This,fuMode,fuType,pwszFileSource,pwszFileDest,pOperation,pProgress,pMetaData,pUnknown,ppNewObject) ( (This)->lpVtbl -> Insert3(This,fuMode,fuType,pwszFileSource,pwszFileDest,pOperation,pProgress,pMetaData,pUnknown,ppNewObject) )
#endif
#endif
#ifndef __IWMDMObjectInfo_INTERFACE_DEFINED__
#define __IWMDMObjectInfo_INTERFACE_DEFINED__
extern const IID IID_IWMDMObjectInfo;
typedef struct IWMDMObjectInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMObjectInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMObjectInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMObjectInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPlayLength) (IWMDMObjectInfo * This, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * SetPlayLength) (IWMDMObjectInfo * This, DWORD dwLength);
	HRESULT(STDMETHODCALLTYPE * GetPlayOffset) (IWMDMObjectInfo * This, DWORD * pdwOffset);
	HRESULT(STDMETHODCALLTYPE * SetPlayOffset) (IWMDMObjectInfo * This, DWORD dwOffset);
	HRESULT(STDMETHODCALLTYPE * GetTotalLength) (IWMDMObjectInfo * This, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetLastPlayPosition) (IWMDMObjectInfo * This, DWORD * pdwLastPos);
	HRESULT(STDMETHODCALLTYPE * GetLongestPlayPosition) (IWMDMObjectInfo * This, DWORD * pdwLongestPos);
	END_INTERFACE
}  IWMDMObjectInfoVtbl;
interface IWMDMObjectInfo
{
	CONST_VTBL struct IWMDMObjectInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMObjectInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMObjectInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMObjectInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMObjectInfo_GetPlayLength(This,pdwLength) ( (This)->lpVtbl -> GetPlayLength(This,pdwLength) )
#define IWMDMObjectInfo_SetPlayLength(This,dwLength) ( (This)->lpVtbl -> SetPlayLength(This,dwLength) )
#define IWMDMObjectInfo_GetPlayOffset(This,pdwOffset) ( (This)->lpVtbl -> GetPlayOffset(This,pdwOffset) )
#define IWMDMObjectInfo_SetPlayOffset(This,dwOffset) ( (This)->lpVtbl -> SetPlayOffset(This,dwOffset) )
#define IWMDMObjectInfo_GetTotalLength(This,pdwLength) ( (This)->lpVtbl -> GetTotalLength(This,pdwLength) )
#define IWMDMObjectInfo_GetLastPlayPosition(This,pdwLastPos) ( (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos) )
#define IWMDMObjectInfo_GetLongestPlayPosition(This,pdwLongestPos) ( (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos) )
#endif
#endif
#ifndef __IWMDMRevoked_INTERFACE_DEFINED__
#define __IWMDMRevoked_INTERFACE_DEFINED__
extern const IID IID_IWMDMRevoked;
typedef struct IWMDMRevokedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMRevoked * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMRevoked * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMRevoked * This);
	HRESULT(STDMETHODCALLTYPE * GetRevocationURL) (IWMDMRevoked * This, LPWSTR * ppwszRevocationURL, DWORD * pdwBufferLen, DWORD * pdwRevokedBitFlag);
	END_INTERFACE
}  IWMDMRevokedVtbl;
interface IWMDMRevoked
{
	CONST_VTBL struct IWMDMRevokedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMRevoked_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMRevoked_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMRevoked_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMRevoked_GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen,pdwRevokedBitFlag) ( (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen,pdwRevokedBitFlag) )
#endif
#endif
#ifndef __IWMDMNotification_INTERFACE_DEFINED__
#define __IWMDMNotification_INTERFACE_DEFINED__
extern const IID IID_IWMDMNotification;
typedef struct IWMDMNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMNotification * This);
	HRESULT(STDMETHODCALLTYPE * WMDMMessage) (IWMDMNotification * This, DWORD dwMessageType, LPCWSTR pwszCanonicalName);
	END_INTERFACE
}  IWMDMNotificationVtbl;
interface IWMDMNotification
{
	CONST_VTBL struct IWMDMNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMNotification_WMDMMessage(This,dwMessageType,pwszCanonicalName) ( (This)->lpVtbl -> WMDMMessage(This,dwMessageType,pwszCanonicalName) )
#endif
#endif
#ifdef INITGUID
static const WCHAR *g_wszWMDMFileName = L"WMDM/FileName";
static const WCHAR *g_wszWMDMFormatCode = L"WMDM/FormatCode";
static const WCHAR *g_wszWMDMLastModifiedDate = L"WMDM/LastModifiedDate";
static const WCHAR *g_wszWMDMFileCreationDate = L"WMDM/FileCreationDate";
static const WCHAR *g_wszWMDMFileSize = L"WMDM/FileSize";
static const WCHAR *g_wszWMDMFileAttributes = L"WMDM/FileAttributes";
static const WCHAR *g_wszAudioWAVECodec = L"WMDM/AudioWAVECodec";
static const WCHAR *g_wszVideoFourCCCodec = L"WMDM/VideoFourCCCodec";
static const WCHAR *g_wszWMDMTitle = L"WMDM/Title";
static const WCHAR *g_wszWMDMAuthor = L"WMDM/Author";
static const WCHAR *g_wszWMDMDescription = L"WMDM/Description";
static const WCHAR *g_wszWMDMIsProtected = L"WMDM/IsProtected";
static const WCHAR *g_wszWMDMAlbumTitle = L"WMDM/AlbumTitle";
static const WCHAR *g_wszWMDMAlbumArtist = L"WMDM/AlbumArtist";
static const WCHAR *g_wszWMDMTrack = L"WMDM/Track";
static const WCHAR *g_wszWMDMGenre = L"WMDM/Genre";
static const WCHAR *g_wszWMDMTrackMood = L"WMDM/TrackMood";
static const WCHAR *g_wszWMDMAlbumCoverFormat = L"WMDM/AlbumCoverFormat";
static const WCHAR *g_wszWMDMAlbumCoverSize = L"WMDM/AlbumCoverSize";
static const WCHAR *g_wszWMDMAlbumCoverHeight = L"WMDM/AlbumCoverHeight";
static const WCHAR *g_wszWMDMAlbumCoverWidth = L"WMDM/AlbumCoverWidth";
static const WCHAR *g_wszWMDMAlbumCoverDuration = L"WMDM/AlbumCoverDuration";
static const WCHAR *g_wszWMDMAlbumCoverData = L"WMDM/AlbumCoverData";
static const WCHAR *g_wszWMDMYear = L"WMDM/Year";
static const WCHAR *g_wszWMDMComposer = L"WMDM/Composer";
static const WCHAR *g_wszWMDMCodec = L"WMDM/Codec";
static const WCHAR *g_wszWMDMDRMId = L"WMDM/DRMId";
static const WCHAR *g_wszWMDMBitrate = L"WMDM/Bitrate";
static const WCHAR *g_wszWMDMBitRateType = L"WMDM/BitRateType";
static const WCHAR *g_wszWMDMSampleRate = L"WMDM/SampleRate";
static const WCHAR *g_wszWMDMNumChannels = L"WMDM/NumChannels";
static const WCHAR *g_wszWMDMBlockAlignment = L"WMDM/BlockAlignment";
static const WCHAR *g_wszWMDMAudioBitDepth = L"WMDM/AudioBitDepth";
static const WCHAR *g_wszWMDMTotalBitrate = L"WMDM/TotalBitrate";
static const WCHAR *g_wszWMDMVideoBitrate = L"WMDM/VideoBitrate";
static const WCHAR *g_wszWMDMFrameRate = L"WMDM/FrameRate";
static const WCHAR *g_wszWMDMScanType = L"WMDM/ScanType";
static const WCHAR *g_wszWMDMKeyFrameDistance = L"WMDM/KeyFrameDistance";
static const WCHAR *g_wszWMDMBufferSize = L"WMDM/BufferSize";
static const WCHAR *g_wszWMDMQualitySetting = L"WMDM/QualitySetting";
static const WCHAR *g_wszWMDMEncodingProfile = L"WMDM/EncodingProfile";
static const WCHAR *g_wszWMDMDuration = L"WMDM/Duration";
static const WCHAR *g_wszWMDMAlbumArt = L"WMDM/AlbumArt";
static const WCHAR *g_wszWMDMBuyNow = L"WMDM/BuyNow";
static const WCHAR *g_wszWMDMNonConsumable = L"WMDM/NonConsumable";
static const WCHAR *g_wszWMDMediaClassPrimaryID = L"WMDM/MediaClassPrimaryID";
static const WCHAR *g_wszWMDMMediaClassSecondaryID = L"WMDM/MediaClassSecondaryID";
static const WCHAR *g_wszWMDMUserEffectiveRating = L"WMDM/UserEffectiveRating";
static const WCHAR *g_wszWMDMUserRating = L"WMDM/UserRating";
static const WCHAR *g_wszWMDMUserRatingOnDevice = L"WMDM/UserRatingOnDevice";
static const WCHAR *g_wszWMDMPlayCount = L"WMDM/PlayCount";
static const WCHAR *g_wszWMDMDevicePlayCount = L"WMDM/DevicePlayCount";
static const WCHAR *g_wszWMDMAuthorDate = L"WMDM/AuthorDate";
static const WCHAR *g_wszWMDMUserLastPlayTime = L"WMDM/UserLastPlayTime";
static const WCHAR *g_wszWMDMSubTitle = L"WMDM/SubTitle";
static const WCHAR *g_wszWMDMSubTitleDescription = L"WMDM/SubTitleDescription";
static const WCHAR *g_wszWMDMMediaCredits = L"WMDM/MediaCredits";
static const WCHAR *g_wszWMDMMediaStationName = L"WMDM/MediaStationName";
static const WCHAR *g_wszWMDMMediaOriginalChannel = L"WMDM/MediaOriginalChannel";
static const WCHAR *g_wszWMDMMediaOriginalBroadcastDateTime = L"WMDM/MediaOriginalBroadcastDateTime";
static const WCHAR *g_wszWMDMProviderCopyright = L"WMDM/ProviderCopyright";
static const WCHAR *g_wszWMDMSyncID = L"WMDM/SyncID";
static const WCHAR *g_wszWMDMPersistentUniqueID = L"WMDM/PersistentUniqueID";
static const WCHAR *g_wszWMDMWidth = L"WMDM/Width";
static const WCHAR *g_wszWMDMHeight = L"WMDM/Height";
static const WCHAR *g_wszWMDMSyncTime = L"WMDM/SyncTime";
static const WCHAR *g_wszWMDMParentalRating = L"WMDM/ParentalRating";
static const WCHAR *g_wszWMDMMetaGenre = L"WMDM/MetaGenre";
static const WCHAR *g_wszWMDMIsRepeat = L"WMDM/IsRepeat";
static const WCHAR *g_wszWMDMSupportedDeviceProperties = L"WMDM/SupportedDeviceProperties";
static const WCHAR *g_wszWMDMDeviceFriendlyName = L"WMDM/DeviceFriendlyName";
static const WCHAR *g_wszWMDMFormatsSupported = L"WMDM/FormatsSupported";
static const WCHAR *g_wszWMDMFormatsSupportedAreOrdered = L"WMDM/FormatsSupportedAreOrdered";
static const WCHAR *g_wszWMDMSyncRelationshipID = L"WMDM/SyncRelationshipID";
static const WCHAR *g_wszWMDMDeviceModelName = L"WMDM/DeviceModelName";
static const WCHAR *g_wszWMDMDeviceFirmwareVersion = L"WMDM/DeviceFirmwareVersion";
static const WCHAR *g_wszWMDMDeviceVendorExtension = L"WMDM/DeviceVendorExtension";
static const WCHAR *g_wszWMDMDeviceProtocol = L"WMDM/DeviceProtocol";
static const WCHAR *g_wszWMDMDeviceServiceProviderVendor = L"WMDM/DeviceServiceProviderVendor";
static const WCHAR *g_wszWMDMDeviceRevocationInfo = L"WMDM/DeviceRevocationInfo";
static const WCHAR *g_wszWMDMCollectionID = L"WMDM/CollectionID";
static const WCHAR *g_wszWMDMOwner = L"WMDM/Owner";
static const WCHAR *g_wszWMDMEditor = L"WMDM/Editor";
static const WCHAR *g_wszWMDMWebmaster = L"WMDM/Webmaster";
static const WCHAR *g_wszWMDMSourceURL = L"WMDM/SourceURL";
static const WCHAR *g_wszWMDMDestinationURL = L"WMDM/DestinationURL";
static const WCHAR *g_wszWMDMCategory = L"WMDM/Category";
static const WCHAR *g_wszWMDMTimeBookmark = L"WMDM/TimeBookmark";
static const WCHAR *g_wszWMDMObjectBookmark = L"WMDM/ObjectBookmark";
static const WCHAR *g_wszWMDMByteBookmark = L"WMDM/ByteBookmark";
static const WCHAR *g_wszWMDMDataOffset = L"WMDM/DataOffset";
static const WCHAR *g_wszWMDMDataLength = L"WMDM/DataLength";
static const WCHAR *g_wszWMDMDataUnits = L"WMDM/DataUnits";
static const WCHAR *g_wszWMDMTimeToLive = L"WMDM/TimeToLive";
static const WCHAR *g_wszWMDMMediaGuid = L"WMDM/MediaGuid";
static const WCHAR *g_wszWPDPassthroughPropertyValues = L"WPD/PassthroughPropertyValues";
#endif
#define CCH_WMDM_PROPNAME(sz) (sizeof(sz)/sizeof(sz[0]))
union WMDMDetermineMaxPropStringLen
{
	WCHAR sz001[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
	WCHAR sz002[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
	WCHAR sz003[CCH_WMDM_PROPNAME(L"WMDM/FileName")];
	WCHAR sz004[CCH_WMDM_PROPNAME(L"WMDM/FormatCode")];
	WCHAR sz005[CCH_WMDM_PROPNAME(L"WMDM/LastModifiedDate")];
	WCHAR sz006[CCH_WMDM_PROPNAME(L"WMDM/FileSize")];
	WCHAR sz007[CCH_WMDM_PROPNAME(L"WMDM/FileAttributes")];
	WCHAR sz008[CCH_WMDM_PROPNAME(L"WMDM/AudioWAVECodec")];
	WCHAR sz009[CCH_WMDM_PROPNAME(L"WMDM/VideoFourCCCodec")];
	WCHAR sz010[CCH_WMDM_PROPNAME(L"WMDM/Title")];
	WCHAR sz011[CCH_WMDM_PROPNAME(L"WMDM/Author")];
	WCHAR sz012[CCH_WMDM_PROPNAME(L"WMDM/Description")];
	WCHAR sz013[CCH_WMDM_PROPNAME(L"WMDM/IsProtected")];
	WCHAR sz014[CCH_WMDM_PROPNAME(L"WMDM/AlbumTitle")];
	WCHAR sz015[CCH_WMDM_PROPNAME(L"WMDM/AlbumArtist")];
	WCHAR sz016[CCH_WMDM_PROPNAME(L"WMDM/Track")];
	WCHAR sz017[CCH_WMDM_PROPNAME(L"WMDM/Genre")];
	WCHAR sz018[CCH_WMDM_PROPNAME(L"WMDM/TrackMood")];
	WCHAR sz019[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverFormat")];
	WCHAR sz020[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverSize")];
	WCHAR sz021[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverHeight")];
	WCHAR sz022[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverWidth")];
	WCHAR sz023[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverDuration")];
	WCHAR sz024[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverData")];
	WCHAR sz025[CCH_WMDM_PROPNAME(L"WMDM/Year")];
	WCHAR sz026[CCH_WMDM_PROPNAME(L"WMDM/Composer")];
	WCHAR sz027[CCH_WMDM_PROPNAME(L"WMDM/Codec")];
	WCHAR sz028[CCH_WMDM_PROPNAME(L"WMDM/DRMId")];
	WCHAR sz029[CCH_WMDM_PROPNAME(L"WMDM/Bitrate")];
	WCHAR sz030[CCH_WMDM_PROPNAME(L"WMDM/BitRateType")];
	WCHAR sz031[CCH_WMDM_PROPNAME(L"WMDM/SampleRate")];
	WCHAR sz032[CCH_WMDM_PROPNAME(L"WMDM/NumChannels")];
	WCHAR sz033[CCH_WMDM_PROPNAME(L"WMDM/BlockAlignment")];
	WCHAR sz034[CCH_WMDM_PROPNAME(L"WMDM/AudioBitDepth")];
	WCHAR sz035[CCH_WMDM_PROPNAME(L"WMDM/TotalBitrate")];
	WCHAR sz036[CCH_WMDM_PROPNAME(L"WMDM/VideoBitrate")];
	WCHAR sz037[CCH_WMDM_PROPNAME(L"WMDM/FrameRate")];
	WCHAR sz041[CCH_WMDM_PROPNAME(L"WMDM/ScanType")];
	WCHAR sz043[CCH_WMDM_PROPNAME(L"WMDM/KeyFrameDistance")];
	WCHAR sz044[CCH_WMDM_PROPNAME(L"WMDM/BufferSize")];
	WCHAR sz045[CCH_WMDM_PROPNAME(L"WMDM/QualitySetting")];
	WCHAR sz046[CCH_WMDM_PROPNAME(L"WMDM/Duration")];
	WCHAR sz047[CCH_WMDM_PROPNAME(L"WMDM/AlbumArt")];
	WCHAR sz048[CCH_WMDM_PROPNAME(L"WMDM/BuyNow")];
	WCHAR sz049[CCH_WMDM_PROPNAME(L"WMDM/MediaClassPrimaryID")];
	WCHAR sz050[CCH_WMDM_PROPNAME(L"WMDM/MediaClassSecondayID")];
	WCHAR sz051[CCH_WMDM_PROPNAME(L"WMDM/UserEffectiveRating")];
	WCHAR sz052[CCH_WMDM_PROPNAME(L"WMDM/UserRating")];
	WCHAR sz053[CCH_WMDM_PROPNAME(L"WMDM/UserRatingOnDevice")];
	WCHAR sz054[CCH_WMDM_PROPNAME(L"WMDM/PlayCount")];
	WCHAR sz055[CCH_WMDM_PROPNAME(L"WMDM/DevicePlayCount")];
	WCHAR sz056[CCH_WMDM_PROPNAME(L"WMDM/AuthorDate")];
	WCHAR sz057[CCH_WMDM_PROPNAME(L"WMDM/UserLastPlayTime")];
	WCHAR sz058[CCH_WMDM_PROPNAME(L"WMDM/SubTitle")];
	WCHAR sz059[CCH_WMDM_PROPNAME(L"WMDM/SubTitleDescription")];
	WCHAR sz060[CCH_WMDM_PROPNAME(L"WMDM/MediaCredits")];
	WCHAR sz061[CCH_WMDM_PROPNAME(L"WMDM/MediaStationName")];
	WCHAR sz062[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalChannel")];
	WCHAR sz063[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalBroadcastDateTime")];
	WCHAR sz064[CCH_WMDM_PROPNAME(L"WMDM/ProviderCopyright")];
	WCHAR sz065[CCH_WMDM_PROPNAME(L"WMDM/SyncID")];
	WCHAR sz066[CCH_WMDM_PROPNAME(L"WMDM/PersistentUniqueID")];
	WCHAR sz067[CCH_WMDM_PROPNAME(L"WMDM/Width")];
	WCHAR sz068[CCH_WMDM_PROPNAME(L"WMDM/Height")];
	WCHAR sz069[CCH_WMDM_PROPNAME(L"WMDM/SyncTime")];
	WCHAR sz070[CCH_WMDM_PROPNAME(L"WMDM/ParentalRating")];
	WCHAR sz071[CCH_WMDM_PROPNAME(L"WMDM/MetaGenre")];
	WCHAR sz072[CCH_WMDM_PROPNAME(L"WMDM/IsRepeat")];
	WCHAR sz073[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
	WCHAR sz074[CCH_WMDM_PROPNAME(L"WMDM/DeviceFriendlyName")];
	WCHAR sz075[CCH_WMDM_PROPNAME(L"WMDM/FormatsSupported")];
	WCHAR sz076[CCH_WMDM_PROPNAME(L"WMDM/SyncRelationshipID")];
	WCHAR sz077[CCH_WMDM_PROPNAME(L"WMDM/DeviceModelName")];
	WCHAR sz078[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
	WCHAR sz079[CCH_WMDM_PROPNAME(L"WMDM/DeviceVendorExtension")];
	WCHAR sz080[CCH_WMDM_PROPNAME(L"WMDM/DeviceProtocol")];
	WCHAR sz081[CCH_WMDM_PROPNAME(L"WMDM/DeviceServiceProviderVendor")];
	WCHAR sz082[CCH_WMDM_PROPNAME(L"WMDM/EncodingProfile")];
	WCHAR sz083[CCH_WMDM_PROPNAME(L"WMDM/FormatsSupportedAreOrdered")];
	WCHAR sz084[CCH_WMDM_PROPNAME(L"WMDM/DeviceRevocationInfo")];
	WCHAR sz085[CCH_WMDM_PROPNAME(L"WMDM/CollectionID")];
	WCHAR sz086[CCH_WMDM_PROPNAME(L"WPD/PassthroughPropertyValues")];
};
#define WMDM_MAXLEN_PROPERTYNAME (sizeof(WMDMDetermineMaxPropStringLen)/sizeof(WCHAR))
#define MDSP_READ                               0x00000001
#define MDSP_WRITE                              0x00000002
#define MDSP_SEEK_BOF                           0x00000001
#define MDSP_SEEK_CUR                           0x00000002
#define MDSP_SEEK_EOF                           0x00000004
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0028_v0_0_s_ifspec;
#ifndef __IMDServiceProvider_INTERFACE_DEFINED__
#define __IMDServiceProvider_INTERFACE_DEFINED__
extern const IID IID_IMDServiceProvider;
typedef struct IMDServiceProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDServiceProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDServiceProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDServiceProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IMDServiceProvider * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IMDServiceProvider * This, IMDSPEnumDevice ** ppEnumDevice);
	END_INTERFACE
}  IMDServiceProviderVtbl;
interface IMDServiceProvider
{
	CONST_VTBL struct IMDServiceProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDServiceProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDServiceProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDServiceProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDServiceProvider_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IMDServiceProvider_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#endif
#endif
#ifndef __IMDServiceProvider2_INTERFACE_DEFINED__
#define __IMDServiceProvider2_INTERFACE_DEFINED__
extern const IID IID_IMDServiceProvider2;
typedef struct IMDServiceProvider2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDServiceProvider2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDServiceProvider2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDServiceProvider2 * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IMDServiceProvider2 * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IMDServiceProvider2 * This, IMDSPEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * CreateDevice) (IMDServiceProvider2 * This, LPCWSTR pwszDevicePath, DWORD * pdwCount, IMDSPDevice *** pppDeviceArray);
	END_INTERFACE
}  IMDServiceProvider2Vtbl;
interface IMDServiceProvider2
{
	CONST_VTBL struct IMDServiceProvider2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDServiceProvider2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDServiceProvider2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDServiceProvider2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDServiceProvider2_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IMDServiceProvider2_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#define IMDServiceProvider2_CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) ( (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) )
#endif
#endif
#ifndef __IMDServiceProvider3_INTERFACE_DEFINED__
#define __IMDServiceProvider3_INTERFACE_DEFINED__
extern const IID IID_IMDServiceProvider3;
typedef struct IMDServiceProvider3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDServiceProvider3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDServiceProvider3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDServiceProvider3 * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCount) (IMDServiceProvider3 * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * EnumDevices) (IMDServiceProvider3 * This, IMDSPEnumDevice ** ppEnumDevice);
	HRESULT(STDMETHODCALLTYPE * CreateDevice) (IMDServiceProvider3 * This, LPCWSTR pwszDevicePath, DWORD * pdwCount, IMDSPDevice *** pppDeviceArray);
	HRESULT(STDMETHODCALLTYPE * SetDeviceEnumPreference) (IMDServiceProvider3 * This, DWORD dwEnumPref);
	END_INTERFACE
}  IMDServiceProvider3Vtbl;
interface IMDServiceProvider3
{
	CONST_VTBL struct IMDServiceProvider3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDServiceProvider3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDServiceProvider3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDServiceProvider3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDServiceProvider3_GetDeviceCount(This,pdwCount) ( (This)->lpVtbl -> GetDeviceCount(This,pdwCount) )
#define IMDServiceProvider3_EnumDevices(This,ppEnumDevice) ( (This)->lpVtbl -> EnumDevices(This,ppEnumDevice) )
#define IMDServiceProvider3_CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) ( (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray) )
#define IMDServiceProvider3_SetDeviceEnumPreference(This,dwEnumPref) ( (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref) )
#endif
#endif
#ifndef __IMDSPEnumDevice_INTERFACE_DEFINED__
#define __IMDSPEnumDevice_INTERFACE_DEFINED__
extern const IID IID_IMDSPEnumDevice;
typedef struct IMDSPEnumDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPEnumDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPEnumDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPEnumDevice * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMDSPEnumDevice * This, ULONG celt, IMDSPDevice ** ppDevice, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IMDSPEnumDevice * This, ULONG celt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMDSPEnumDevice * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IMDSPEnumDevice * This, IMDSPEnumDevice ** ppEnumDevice);
	END_INTERFACE
}  IMDSPEnumDeviceVtbl;
interface IMDSPEnumDevice
{
	CONST_VTBL struct IMDSPEnumDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPEnumDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPEnumDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPEnumDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPEnumDevice_Next(This,celt,ppDevice,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched) )
#define IMDSPEnumDevice_Skip(This,celt,pceltFetched) ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
#define IMDSPEnumDevice_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMDSPEnumDevice_Clone(This,ppEnumDevice) ( (This)->lpVtbl -> Clone(This,ppEnumDevice) )
#endif
#endif
#ifndef __IMDSPDevice_INTERFACE_DEFINED__
#define __IMDSPDevice_INTERFACE_DEFINED__
extern const IID IID_IMDSPDevice;
typedef struct IMDSPDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPDevice * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IMDSPDevice * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IMDSPDevice * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IMDSPDevice * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IMDSPDevice * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IMDSPDevice * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMDSPDevice * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IMDSPDevice * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPDevice * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IMDSPDevice * This, _WAVEFORMATEX ** pFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPDevice * This, OPAQUECOMMAND * pCommand);
	END_INTERFACE
}  IMDSPDeviceVtbl;
interface IMDSPDevice
{
	CONST_VTBL struct IMDSPDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPDevice_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPDevice_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IMDSPDevice_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IMDSPDevice_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IMDSPDevice_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IMDSPDevice_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IMDSPDevice_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IMDSPDevice_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IMDSPDevice_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPDevice_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IMDSPDevice_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#endif
#endif
#ifndef __IMDSPDevice2_INTERFACE_DEFINED__
#define __IMDSPDevice2_INTERFACE_DEFINED__
extern const IID IID_IMDSPDevice2;
typedef struct IMDSPDevice2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPDevice2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPDevice2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPDevice2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IMDSPDevice2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IMDSPDevice2 * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IMDSPDevice2 * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IMDSPDevice2 * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IMDSPDevice2 * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMDSPDevice2 * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IMDSPDevice2 * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPDevice2 * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IMDSPDevice2 * This, _WAVEFORMATEX ** pFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPDevice2 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IMDSPDevice2 * This, LPCWSTR pszStorageName, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport2) (IMDSPDevice2 * This, DWORD dwFlags, _WAVEFORMATEX ** ppAudioFormatEx, UINT * pnAudioFormatCount, _VIDEOINFOHEADER ** ppVideoFormatEx, UINT * pnVideoFormatCount, WMFILECAPABILITIES ** ppFileType, UINT * pnFileTypeCount);
	HRESULT(STDMETHODCALLTYPE * GetSpecifyPropertyPages) (IMDSPDevice2 * This, ISpecifyPropertyPages ** ppSpecifyPropPages, IUnknown *** pppUnknowns, ULONG * pcUnks);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IMDSPDevice2 * This, LPWSTR pwszPnPName, UINT nMaxChars);
	END_INTERFACE
}  IMDSPDevice2Vtbl;
interface IMDSPDevice2
{
	CONST_VTBL struct IMDSPDevice2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPDevice2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPDevice2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPDevice2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPDevice2_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPDevice2_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IMDSPDevice2_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IMDSPDevice2_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IMDSPDevice2_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IMDSPDevice2_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IMDSPDevice2_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IMDSPDevice2_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IMDSPDevice2_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPDevice2_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IMDSPDevice2_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IMDSPDevice2_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IMDSPDevice2_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
#define IMDSPDevice2_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
#define IMDSPDevice2_GetCanonicalName(This,pwszPnPName,nMaxChars) ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
#endif
#endif
#ifndef __IMDSPDevice3_INTERFACE_DEFINED__
#define __IMDSPDevice3_INTERFACE_DEFINED__
extern const IID IID_IMDSPDevice3;
typedef struct IMDSPDevice3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPDevice3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPDevice3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPDevice3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetManufacturer) (IMDSPDevice3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IMDSPDevice3 * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetType) (IMDSPDevice3 * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IMDSPDevice3 * This, PWMDMID pSerialNumber, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetPowerSource) (IMDSPDevice3 * This, DWORD * pdwPowerSource, DWORD * pdwPercentRemaining);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMDSPDevice3 * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcon) (IMDSPDevice3 * This, ULONG * hIcon);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPDevice3 * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport) (IMDSPDevice3 * This, _WAVEFORMATEX ** pFormatEx, UINT * pnFormatCount, LPWSTR ** pppwszMimeType, UINT * pnMimeTypeCount);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPDevice3 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IMDSPDevice3 * This, LPCWSTR pszStorageName, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetFormatSupport2) (IMDSPDevice3 * This, DWORD dwFlags, _WAVEFORMATEX ** ppAudioFormatEx, UINT * pnAudioFormatCount, _VIDEOINFOHEADER ** ppVideoFormatEx, UINT * pnVideoFormatCount, WMFILECAPABILITIES ** ppFileType, UINT * pnFileTypeCount);
	HRESULT(STDMETHODCALLTYPE * GetSpecifyPropertyPages) (IMDSPDevice3 * This, ISpecifyPropertyPages ** ppSpecifyPropPages, IUnknown *** pppUnknowns, ULONG * pcUnks);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IMDSPDevice3 * This, LPWSTR pwszPnPName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IMDSPDevice3 * This, LPCWSTR pwszPropName, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IMDSPDevice3 * This, LPCWSTR pwszPropName, const PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetFormatCapability) (IMDSPDevice3 * This, WMDM_FORMATCODE format, WMDM_FORMAT_CAPABILITY * pFormatSupport);
	HRESULT(STDMETHODCALLTYPE * DeviceIoControl) (IMDSPDevice3 * This, DWORD dwIoControlCode, BYTE * lpInBuffer, DWORD nInBufferSize, BYTE * lpOutBuffer, LPDWORD pnOutBufferSize);
	HRESULT(STDMETHODCALLTYPE * FindStorage) (IMDSPDevice3 * This, WMDM_FIND_SCOPE findScope, LPCWSTR pwszUniqueID, IMDSPStorage ** ppStorage);
	END_INTERFACE
}  IMDSPDevice3Vtbl;
interface IMDSPDevice3
{
	CONST_VTBL struct IMDSPDevice3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPDevice3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPDevice3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPDevice3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPDevice3_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPDevice3_GetManufacturer(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars) )
#define IMDSPDevice3_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IMDSPDevice3_GetType(This,pdwType) ( (This)->lpVtbl -> GetType(This,pdwType) )
#define IMDSPDevice3_GetSerialNumber(This,pSerialNumber,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac) )
#define IMDSPDevice3_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) ( (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining) )
#define IMDSPDevice3_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IMDSPDevice3_GetDeviceIcon(This,hIcon) ( (This)->lpVtbl -> GetDeviceIcon(This,hIcon) )
#define IMDSPDevice3_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPDevice3_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) ( (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount) )
#define IMDSPDevice3_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IMDSPDevice3_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IMDSPDevice3_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) ( (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount) )
#define IMDSPDevice3_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) ( (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks) )
#define IMDSPDevice3_GetCanonicalName(This,pwszPnPName,nMaxChars) ( (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars) )
#define IMDSPDevice3_GetProperty(This,pwszPropName,pValue) ( (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue) )
#define IMDSPDevice3_SetProperty(This,pwszPropName,pValue) ( (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue) )
#define IMDSPDevice3_GetFormatCapability(This,format,pFormatSupport) ( (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport) )
#define IMDSPDevice3_DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) ( (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize) )
#define IMDSPDevice3_FindStorage(This,findScope,pwszUniqueID,ppStorage) ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
#endif
#endif
#ifndef __IMDSPDeviceControl_INTERFACE_DEFINED__
#define __IMDSPDeviceControl_INTERFACE_DEFINED__
extern const IID IID_IMDSPDeviceControl;
typedef struct IMDSPDeviceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPDeviceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPDeviceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * GetDCStatus) (IMDSPDeviceControl * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IMDSPDeviceControl * This, DWORD * pdwCapabilitiesMask);
	HRESULT(STDMETHODCALLTYPE * Play) (IMDSPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Record) (IMDSPDeviceControl * This, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMDSPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IMDSPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IMDSPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Seek) (IMDSPDeviceControl * This, UINT fuMode, int nOffset);
	END_INTERFACE
}  IMDSPDeviceControlVtbl;
interface IMDSPDeviceControl
{
	CONST_VTBL struct IMDSPDeviceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPDeviceControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPDeviceControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPDeviceControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPDeviceControl_GetDCStatus(This,pdwStatus) ( (This)->lpVtbl -> GetDCStatus(This,pdwStatus) )
#define IMDSPDeviceControl_GetCapabilities(This,pdwCapabilitiesMask) ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask) )
#define IMDSPDeviceControl_Play(This) ( (This)->lpVtbl -> Play(This) )
#define IMDSPDeviceControl_Record(This,pFormat) ( (This)->lpVtbl -> Record(This,pFormat) )
#define IMDSPDeviceControl_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IMDSPDeviceControl_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IMDSPDeviceControl_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IMDSPDeviceControl_Seek(This,fuMode,nOffset) ( (This)->lpVtbl -> Seek(This,fuMode,nOffset) )
#endif
#endif
#ifndef __IMDSPEnumStorage_INTERFACE_DEFINED__
#define __IMDSPEnumStorage_INTERFACE_DEFINED__
extern const IID IID_IMDSPEnumStorage;
typedef struct IMDSPEnumStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPEnumStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPEnumStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPEnumStorage * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMDSPEnumStorage * This, ULONG celt, IMDSPStorage ** ppStorage, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IMDSPEnumStorage * This, ULONG celt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMDSPEnumStorage * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IMDSPEnumStorage * This, IMDSPEnumStorage ** ppEnumStorage);
	END_INTERFACE
}  IMDSPEnumStorageVtbl;
interface IMDSPEnumStorage
{
	CONST_VTBL struct IMDSPEnumStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPEnumStorage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPEnumStorage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPEnumStorage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPEnumStorage_Next(This,celt,ppStorage,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched) )
#define IMDSPEnumStorage_Skip(This,celt,pceltFetched) ( (This)->lpVtbl -> Skip(This,celt,pceltFetched) )
#define IMDSPEnumStorage_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMDSPEnumStorage_Clone(This,ppEnumStorage) ( (This)->lpVtbl -> Clone(This,ppEnumStorage) )
#endif
#endif
#ifndef __IMDSPStorage_INTERFACE_DEFINED__
#define __IMDSPStorage_INTERFACE_DEFINED__
extern const IID IID_IMDSPStorage;
typedef struct IMDSPStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPStorage * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IMDSPStorage * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IMDSPStorage * This, IMDSPStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IMDSPStorage * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPStorage * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IMDSPStorage * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IMDSPStorage * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IMDSPStorage * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * CreateStorage) (IMDSPStorage * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat, LPWSTR pwszName, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPStorage * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPStorage * This, OPAQUECOMMAND * pCommand);
	END_INTERFACE
}  IMDSPStorageVtbl;
interface IMDSPStorage
{
	CONST_VTBL struct IMDSPStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPStorage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPStorage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPStorage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPStorage_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IMDSPStorage_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IMDSPStorage_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IMDSPStorage_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPStorage_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IMDSPStorage_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IMDSPStorage_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IMDSPStorage_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
#define IMDSPStorage_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPStorage_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#endif
#endif
#ifndef __IMDSPStorage2_INTERFACE_DEFINED__
#define __IMDSPStorage2_INTERFACE_DEFINED__
extern const IID IID_IMDSPStorage2;
typedef struct IMDSPStorage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPStorage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPStorage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPStorage2 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IMDSPStorage2 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IMDSPStorage2 * This, IMDSPStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IMDSPStorage2 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPStorage2 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IMDSPStorage2 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IMDSPStorage2 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IMDSPStorage2 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * CreateStorage) (IMDSPStorage2 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat, LPWSTR pwszName, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPStorage2 * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPStorage2 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IMDSPStorage2 * This, LPCWSTR pszStorageName, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * CreateStorage2) (IMDSPStorage2 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat, LPWSTR pwszName, ULONGLONG qwFileSize, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IMDSPStorage2 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IMDSPStorage2 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	END_INTERFACE
}  IMDSPStorage2Vtbl;
interface IMDSPStorage2
{
	CONST_VTBL struct IMDSPStorage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPStorage2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPStorage2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPStorage2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPStorage2_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IMDSPStorage2_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IMDSPStorage2_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IMDSPStorage2_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPStorage2_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IMDSPStorage2_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IMDSPStorage2_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IMDSPStorage2_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
#define IMDSPStorage2_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPStorage2_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IMDSPStorage2_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IMDSPStorage2_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
#define IMDSPStorage2_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
#define IMDSPStorage2_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#endif
#endif
#ifndef __IMDSPStorage3_INTERFACE_DEFINED__
#define __IMDSPStorage3_INTERFACE_DEFINED__
extern const IID IID_IMDSPStorage3;
typedef struct IMDSPStorage3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPStorage3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPStorage3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPStorage3 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IMDSPStorage3 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IMDSPStorage3 * This, IMDSPStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IMDSPStorage3 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPStorage3 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IMDSPStorage3 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IMDSPStorage3 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IMDSPStorage3 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * CreateStorage) (IMDSPStorage3 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat, LPWSTR pwszName, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPStorage3 * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPStorage3 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IMDSPStorage3 * This, LPCWSTR pszStorageName, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * CreateStorage2) (IMDSPStorage3 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat, LPWSTR pwszName, ULONGLONG qwFileSize, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IMDSPStorage3 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IMDSPStorage3 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IMDSPStorage3 * This, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IMDSPStorage3 * This, IWMDMMetaData * pMetadata);
	END_INTERFACE
}  IMDSPStorage3Vtbl;
interface IMDSPStorage3
{
	CONST_VTBL struct IMDSPStorage3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPStorage3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPStorage3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPStorage3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPStorage3_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IMDSPStorage3_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IMDSPStorage3_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IMDSPStorage3_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPStorage3_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IMDSPStorage3_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IMDSPStorage3_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IMDSPStorage3_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
#define IMDSPStorage3_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPStorage3_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IMDSPStorage3_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IMDSPStorage3_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
#define IMDSPStorage3_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
#define IMDSPStorage3_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#define IMDSPStorage3_GetMetadata(This,pMetadata) ( (This)->lpVtbl -> GetMetadata(This,pMetadata) )
#define IMDSPStorage3_SetMetadata(This,pMetadata) ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
#endif
#endif
#ifndef __IMDSPStorage4_INTERFACE_DEFINED__
#define __IMDSPStorage4_INTERFACE_DEFINED__
extern const IID IID_IMDSPStorage4;
typedef struct IMDSPStorage4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPStorage4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPStorage4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPStorage4 * This);
	HRESULT(STDMETHODCALLTYPE * SetAttributes) (IMDSPStorage4 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetStorageGlobals) (IMDSPStorage4 * This, IMDSPStorageGlobals ** ppStorageGlobals);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IMDSPStorage4 * This, DWORD * pdwAttributes, _WAVEFORMATEX * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetName) (IMDSPStorage4 * This, LPWSTR pwszName, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IMDSPStorage4 * This, PWMDMDATETIME pDateTimeUTC);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IMDSPStorage4 * This, DWORD * pdwSizeLow, DWORD * pdwSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetRights) (IMDSPStorage4 * This, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * CreateStorage) (IMDSPStorage4 * This, DWORD dwAttributes, _WAVEFORMATEX * pFormat, LPWSTR pwszName, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * EnumStorage) (IMDSPStorage4 * This, IMDSPEnumStorage ** ppEnumStorage);
	HRESULT(STDMETHODCALLTYPE * SendOpaqueCommand) (IMDSPStorage4 * This, OPAQUECOMMAND * pCommand);
	HRESULT(STDMETHODCALLTYPE * GetStorage) (IMDSPStorage4 * This, LPCWSTR pszStorageName, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * CreateStorage2) (IMDSPStorage4 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat, LPWSTR pwszName, ULONGLONG qwFileSize, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * SetAttributes2) (IMDSPStorage4 * This, DWORD dwAttributes, DWORD dwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetAttributes2) (IMDSPStorage4 * This, DWORD * pdwAttributes, DWORD * pdwAttributesEx, _WAVEFORMATEX * pAudioFormat, _VIDEOINFOHEADER * pVideoFormat);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IMDSPStorage4 * This, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IMDSPStorage4 * This, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * SetReferences) (IMDSPStorage4 * This, DWORD dwRefs, IMDSPStorage ** ppISPStorage);
	HRESULT(STDMETHODCALLTYPE * GetReferences) (IMDSPStorage4 * This, DWORD * pdwRefs, IMDSPStorage *** pppISPStorage);
	HRESULT(STDMETHODCALLTYPE * CreateStorageWithMetadata) (IMDSPStorage4 * This, DWORD dwAttributes, LPCWSTR pwszName, IWMDMMetaData * pMetadata, ULONGLONG qwFileSize, IMDSPStorage ** ppNewStorage);
	HRESULT(STDMETHODCALLTYPE * GetSpecifiedMetadata) (IMDSPStorage4 * This, DWORD cProperties, LPCWSTR * ppwszPropNames, IWMDMMetaData * pMetadata);
	HRESULT(STDMETHODCALLTYPE * FindStorage) (IMDSPStorage4 * This, WMDM_FIND_SCOPE findScope, LPCWSTR pwszUniqueID, IMDSPStorage ** ppStorage);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IMDSPStorage4 * This, IMDSPStorage ** ppStorage);
	END_INTERFACE
}  IMDSPStorage4Vtbl;
interface IMDSPStorage4
{
	CONST_VTBL struct IMDSPStorage4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPStorage4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPStorage4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPStorage4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPStorage4_SetAttributes(This,dwAttributes,pFormat) ( (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat) )
#define IMDSPStorage4_GetStorageGlobals(This,ppStorageGlobals) ( (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals) )
#define IMDSPStorage4_GetAttributes(This,pdwAttributes,pFormat) ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat) )
#define IMDSPStorage4_GetName(This,pwszName,nMaxChars) ( (This)->lpVtbl -> GetName(This,pwszName,nMaxChars) )
#define IMDSPStorage4_GetDate(This,pDateTimeUTC) ( (This)->lpVtbl -> GetDate(This,pDateTimeUTC) )
#define IMDSPStorage4_GetSize(This,pdwSizeLow,pdwSizeHigh) ( (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh) )
#define IMDSPStorage4_GetRights(This,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac) )
#define IMDSPStorage4_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) ( (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage) )
#define IMDSPStorage4_EnumStorage(This,ppEnumStorage) ( (This)->lpVtbl -> EnumStorage(This,ppEnumStorage) )
#define IMDSPStorage4_SendOpaqueCommand(This,pCommand) ( (This)->lpVtbl -> SendOpaqueCommand(This,pCommand) )
#define IMDSPStorage4_GetStorage(This,pszStorageName,ppStorage) ( (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage) )
#define IMDSPStorage4_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) ( (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage) )
#define IMDSPStorage4_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat) )
#define IMDSPStorage4_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) ( (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat) )
#define IMDSPStorage4_GetMetadata(This,pMetadata) ( (This)->lpVtbl -> GetMetadata(This,pMetadata) )
#define IMDSPStorage4_SetMetadata(This,pMetadata) ( (This)->lpVtbl -> SetMetadata(This,pMetadata) )
#define IMDSPStorage4_SetReferences(This,dwRefs,ppISPStorage) ( (This)->lpVtbl -> SetReferences(This,dwRefs,ppISPStorage) )
#define IMDSPStorage4_GetReferences(This,pdwRefs,pppISPStorage) ( (This)->lpVtbl -> GetReferences(This,pdwRefs,pppISPStorage) )
#define IMDSPStorage4_CreateStorageWithMetadata(This,dwAttributes,pwszName,pMetadata,qwFileSize,ppNewStorage) ( (This)->lpVtbl -> CreateStorageWithMetadata(This,dwAttributes,pwszName,pMetadata,qwFileSize,ppNewStorage) )
#define IMDSPStorage4_GetSpecifiedMetadata(This,cProperties,ppwszPropNames,pMetadata) ( (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,pMetadata) )
#define IMDSPStorage4_FindStorage(This,findScope,pwszUniqueID,ppStorage) ( (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage) )
#define IMDSPStorage4_GetParent(This,ppStorage) ( (This)->lpVtbl -> GetParent(This,ppStorage) )
#endif
#endif
#ifndef __IMDSPStorageGlobals_INTERFACE_DEFINED__
#define __IMDSPStorageGlobals_INTERFACE_DEFINED__
extern const IID IID_IMDSPStorageGlobals;
typedef struct IMDSPStorageGlobalsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPStorageGlobals * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPStorageGlobals * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPStorageGlobals * This);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IMDSPStorageGlobals * This, DWORD * pdwCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetSerialNumber) (IMDSPStorageGlobals * This, PWMDMID pSerialNum, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetTotalSize) (IMDSPStorageGlobals * This, DWORD * pdwTotalSizeLow, DWORD * pdwTotalSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetTotalFree) (IMDSPStorageGlobals * This, DWORD * pdwFreeLow, DWORD * pdwFreeHigh);
	HRESULT(STDMETHODCALLTYPE * GetTotalBad) (IMDSPStorageGlobals * This, DWORD * pdwBadLow, DWORD * pdwBadHigh);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMDSPStorageGlobals * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IMDSPStorageGlobals * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * GetDevice) (IMDSPStorageGlobals * This, IMDSPDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetRootStorage) (IMDSPStorageGlobals * This, IMDSPStorage ** ppRoot);
	END_INTERFACE
}  IMDSPStorageGlobalsVtbl;
interface IMDSPStorageGlobals
{
	CONST_VTBL struct IMDSPStorageGlobalsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPStorageGlobals_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPStorageGlobals_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPStorageGlobals_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPStorageGlobals_GetCapabilities(This,pdwCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
#define IMDSPStorageGlobals_GetSerialNumber(This,pSerialNum,abMac) ( (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac) )
#define IMDSPStorageGlobals_GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) ( (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh) )
#define IMDSPStorageGlobals_GetTotalFree(This,pdwFreeLow,pdwFreeHigh) ( (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh) )
#define IMDSPStorageGlobals_GetTotalBad(This,pdwBadLow,pdwBadHigh) ( (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh) )
#define IMDSPStorageGlobals_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IMDSPStorageGlobals_Initialize(This,fuMode,pProgress) ( (This)->lpVtbl -> Initialize(This,fuMode,pProgress) )
#define IMDSPStorageGlobals_GetDevice(This,ppDevice) ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define IMDSPStorageGlobals_GetRootStorage(This,ppRoot) ( (This)->lpVtbl -> GetRootStorage(This,ppRoot) )
#endif
#endif
#ifndef __IMDSPObjectInfo_INTERFACE_DEFINED__
#define __IMDSPObjectInfo_INTERFACE_DEFINED__
extern const IID IID_IMDSPObjectInfo;
typedef struct IMDSPObjectInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPObjectInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPObjectInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPObjectInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPlayLength) (IMDSPObjectInfo * This, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * SetPlayLength) (IMDSPObjectInfo * This, DWORD dwLength);
	HRESULT(STDMETHODCALLTYPE * GetPlayOffset) (IMDSPObjectInfo * This, DWORD * pdwOffset);
	HRESULT(STDMETHODCALLTYPE * SetPlayOffset) (IMDSPObjectInfo * This, DWORD dwOffset);
	HRESULT(STDMETHODCALLTYPE * GetTotalLength) (IMDSPObjectInfo * This, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetLastPlayPosition) (IMDSPObjectInfo * This, DWORD * pdwLastPos);
	HRESULT(STDMETHODCALLTYPE * GetLongestPlayPosition) (IMDSPObjectInfo * This, DWORD * pdwLongestPos);
	END_INTERFACE
}  IMDSPObjectInfoVtbl;
interface IMDSPObjectInfo
{
	CONST_VTBL struct IMDSPObjectInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPObjectInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPObjectInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPObjectInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPObjectInfo_GetPlayLength(This,pdwLength) ( (This)->lpVtbl -> GetPlayLength(This,pdwLength) )
#define IMDSPObjectInfo_SetPlayLength(This,dwLength) ( (This)->lpVtbl -> SetPlayLength(This,dwLength) )
#define IMDSPObjectInfo_GetPlayOffset(This,pdwOffset) ( (This)->lpVtbl -> GetPlayOffset(This,pdwOffset) )
#define IMDSPObjectInfo_SetPlayOffset(This,dwOffset) ( (This)->lpVtbl -> SetPlayOffset(This,dwOffset) )
#define IMDSPObjectInfo_GetTotalLength(This,pdwLength) ( (This)->lpVtbl -> GetTotalLength(This,pdwLength) )
#define IMDSPObjectInfo_GetLastPlayPosition(This,pdwLastPos) ( (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos) )
#define IMDSPObjectInfo_GetLongestPlayPosition(This,pdwLongestPos) ( (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos) )
#endif
#endif
#ifndef __IMDSPObject_INTERFACE_DEFINED__
#define __IMDSPObject_INTERFACE_DEFINED__
extern const IID IID_IMDSPObject;
typedef struct IMDSPObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPObject * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMDSPObject * This, UINT fuMode);
	HRESULT(STDMETHODCALLTYPE * Read) (IMDSPObject * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * Write) (IMDSPObject * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMDSPObject * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Seek) (IMDSPObject * This, UINT fuFlags, DWORD dwOffset);
	HRESULT(STDMETHODCALLTYPE * Rename) (IMDSPObject * This, LPWSTR pwszNewName, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Move) (IMDSPObject * This, UINT fuMode, IWMDMProgress * pProgress, IMDSPStorage * pTarget);
	HRESULT(STDMETHODCALLTYPE * Close) (IMDSPObject * This);
	END_INTERFACE
}  IMDSPObjectVtbl;
interface IMDSPObject
{
	CONST_VTBL struct IMDSPObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPObject_Open(This,fuMode) ( (This)->lpVtbl -> Open(This,fuMode) )
#define IMDSPObject_Read(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> Read(This,pData,pdwSize,abMac) )
#define IMDSPObject_Write(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> Write(This,pData,pdwSize,abMac) )
#define IMDSPObject_Delete(This,fuMode,pProgress) ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
#define IMDSPObject_Seek(This,fuFlags,dwOffset) ( (This)->lpVtbl -> Seek(This,fuFlags,dwOffset) )
#define IMDSPObject_Rename(This,pwszNewName,pProgress) ( (This)->lpVtbl -> Rename(This,pwszNewName,pProgress) )
#define IMDSPObject_Move(This,fuMode,pProgress,pTarget) ( (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget) )
#define IMDSPObject_Close(This) ( (This)->lpVtbl -> Close(This) )
#endif
#endif
#ifndef __IMDSPObject2_INTERFACE_DEFINED__
#define __IMDSPObject2_INTERFACE_DEFINED__
extern const IID IID_IMDSPObject2;
typedef struct IMDSPObject2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPObject2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPObject2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPObject2 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMDSPObject2 * This, UINT fuMode);
	HRESULT(STDMETHODCALLTYPE * Read) (IMDSPObject2 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * Write) (IMDSPObject2 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMDSPObject2 * This, UINT fuMode, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Seek) (IMDSPObject2 * This, UINT fuFlags, DWORD dwOffset);
	HRESULT(STDMETHODCALLTYPE * Rename) (IMDSPObject2 * This, LPWSTR pwszNewName, IWMDMProgress * pProgress);
	HRESULT(STDMETHODCALLTYPE * Move) (IMDSPObject2 * This, UINT fuMode, IWMDMProgress * pProgress, IMDSPStorage * pTarget);
	HRESULT(STDMETHODCALLTYPE * Close) (IMDSPObject2 * This);
	HRESULT(STDMETHODCALLTYPE * ReadOnClearChannel) (IMDSPObject2 * This, BYTE * pData, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * WriteOnClearChannel) (IMDSPObject2 * This, BYTE * pData, DWORD * pdwSize);
	END_INTERFACE
}  IMDSPObject2Vtbl;
interface IMDSPObject2
{
	CONST_VTBL struct IMDSPObject2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPObject2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPObject2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPObject2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPObject2_Open(This,fuMode) ( (This)->lpVtbl -> Open(This,fuMode) )
#define IMDSPObject2_Read(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> Read(This,pData,pdwSize,abMac) )
#define IMDSPObject2_Write(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> Write(This,pData,pdwSize,abMac) )
#define IMDSPObject2_Delete(This,fuMode,pProgress) ( (This)->lpVtbl -> Delete(This,fuMode,pProgress) )
#define IMDSPObject2_Seek(This,fuFlags,dwOffset) ( (This)->lpVtbl -> Seek(This,fuFlags,dwOffset) )
#define IMDSPObject2_Rename(This,pwszNewName,pProgress) ( (This)->lpVtbl -> Rename(This,pwszNewName,pProgress) )
#define IMDSPObject2_Move(This,fuMode,pProgress,pTarget) ( (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget) )
#define IMDSPObject2_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMDSPObject2_ReadOnClearChannel(This,pData,pdwSize) ( (This)->lpVtbl -> ReadOnClearChannel(This,pData,pdwSize) )
#define IMDSPObject2_WriteOnClearChannel(This,pData,pdwSize) ( (This)->lpVtbl -> WriteOnClearChannel(This,pData,pdwSize) )
#endif
#endif
#ifndef __IMDSPDirectTransfer_INTERFACE_DEFINED__
#define __IMDSPDirectTransfer_INTERFACE_DEFINED__
extern const IID IID_IMDSPDirectTransfer;
typedef struct IMDSPDirectTransferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPDirectTransfer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPDirectTransfer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPDirectTransfer * This);
	HRESULT(STDMETHODCALLTYPE * TransferToDevice) (IMDSPDirectTransfer * This, LPCWSTR pwszSourceFilePath, IWMDMOperation * pSourceOperation, UINT fuFlags, LPWSTR pwszDestinationName, IWMDMMetaData * pSourceMetaData, IWMDMProgress * pTransferProgress, IMDSPStorage ** ppNewObject);
	END_INTERFACE
}  IMDSPDirectTransferVtbl;
interface IMDSPDirectTransfer
{
	CONST_VTBL struct IMDSPDirectTransferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPDirectTransfer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPDirectTransfer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPDirectTransfer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPDirectTransfer_TransferToDevice(This,pwszSourceFilePath,pSourceOperation,fuFlags,pwszDestinationName,pSourceMetaData,pTransferProgress,ppNewObject) ( (This)->lpVtbl -> TransferToDevice(This,pwszSourceFilePath,pSourceOperation,fuFlags,pwszDestinationName,pSourceMetaData,pTransferProgress,ppNewObject) )
#endif
#endif
#ifndef __IMDSPRevoked_INTERFACE_DEFINED__
#define __IMDSPRevoked_INTERFACE_DEFINED__
extern const IID IID_IMDSPRevoked;
typedef struct IMDSPRevokedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMDSPRevoked * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMDSPRevoked * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMDSPRevoked * This);
	HRESULT(STDMETHODCALLTYPE * GetRevocationURL) (IMDSPRevoked * This, LPWSTR * ppwszRevocationURL, DWORD * pdwBufferLen);
	END_INTERFACE
}  IMDSPRevokedVtbl;
interface IMDSPRevoked
{
	CONST_VTBL struct IMDSPRevokedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMDSPRevoked_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMDSPRevoked_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMDSPRevoked_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMDSPRevoked_GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen) ( (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen) )
#endif
#endif
#define WMDM_SCP_EXAMINE_EXTENSION                 0x00000001L
#define WMDM_SCP_EXAMINE_DATA                      0x00000002L
#define WMDM_SCP_DECIDE_DATA                       0x00000008L
#define WMDM_SCP_PROTECTED_OUTPUT                  0x00000010L
#define WMDM_SCP_UNPROTECTED_OUTPUT                0x00000020L
#define WMDM_SCP_RIGHTS_DATA                       0x00000040L
#define WMDM_SCP_TRANSFER_OBJECTDATA               0x00000020L
#define WMDM_SCP_NO_MORE_CHANGES                   0x00000040L
#define WMDM_SCP_DRMINFO_NOT_DRMPROTECTED          0x00000000L
#define WMDM_SCP_DRMINFO_V1HEADER                  0x00000001L
#define WMDM_SCP_DRMINFO_V2HEADER                  0x00000002L
#ifndef _DEFINE_SCP_EVENTID
#define _DEFINE_SCP_EVENTID
DEFINE_GUID(SCP_EVENTID_ACQSECURECLOCK, 0x86248cc9, 0x4a59, 0x43e2, 0x91, 0x46, 0x48, 0xa7, 0xf3, 0xf4, 0x14, 0xc);
DEFINE_GUID(SCP_EVENTID_NEEDTOINDIV, 0x87a507c7, 0xb469, 0x4386, 0xb9, 0x76, 0xd5, 0xd1, 0xce, 0x53, 0x8a, 0x6f);
DEFINE_GUID(SCP_EVENTID_DRMINFO, 0x213dd287, 0x41d2, 0x432b, 0x9e, 0x3f, 0x3b, 0x4f, 0x7b, 0x35, 0x81, 0xdd);
DEFINE_GUID(SCP_PARAMID_DRMVERSION, 0x41d0155d, 0x7cc7, 0x4217, 0xad, 0xa9, 0x00, 0x50, 0x74, 0x62, 0x4d, 0xa4);
#endif
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0047_v0_0_s_ifspec;
#ifndef __ISCPSecureAuthenticate_INTERFACE_DEFINED__
#define __ISCPSecureAuthenticate_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureAuthenticate;
typedef struct ISCPSecureAuthenticateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureAuthenticate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureAuthenticate * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureAuthenticate * This);
	HRESULT(STDMETHODCALLTYPE * GetSecureQuery) (ISCPSecureAuthenticate * This, ISCPSecureQuery ** ppSecureQuery);
	END_INTERFACE
}  ISCPSecureAuthenticateVtbl;
interface ISCPSecureAuthenticate
{
	CONST_VTBL struct ISCPSecureAuthenticateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureAuthenticate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureAuthenticate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureAuthenticate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureAuthenticate_GetSecureQuery(This,ppSecureQuery) ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
#endif
#endif
#ifndef __ISCPSecureAuthenticate2_INTERFACE_DEFINED__
#define __ISCPSecureAuthenticate2_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureAuthenticate2;
typedef struct ISCPSecureAuthenticate2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureAuthenticate2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureAuthenticate2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureAuthenticate2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSecureQuery) (ISCPSecureAuthenticate2 * This, ISCPSecureQuery ** ppSecureQuery);
	HRESULT(STDMETHODCALLTYPE * GetSCPSession) (ISCPSecureAuthenticate2 * This, ISCPSession ** ppSCPSession);
	END_INTERFACE
}  ISCPSecureAuthenticate2Vtbl;
interface ISCPSecureAuthenticate2
{
	CONST_VTBL struct ISCPSecureAuthenticate2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureAuthenticate2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureAuthenticate2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureAuthenticate2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureAuthenticate2_GetSecureQuery(This,ppSecureQuery) ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
#define ISCPSecureAuthenticate2_GetSCPSession(This,ppSCPSession) ( (This)->lpVtbl -> GetSCPSession(This,ppSCPSession) )
#endif
#endif
#ifndef __ISCPSecureQuery_INTERFACE_DEFINED__
#define __ISCPSecureQuery_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureQuery;
typedef struct ISCPSecureQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureQuery * This);
	HRESULT(STDMETHODCALLTYPE * GetDataDemands) (ISCPSecureQuery * This, UINT * pfuFlags, DWORD * pdwMinRightsData, DWORD * pdwMinExamineData, DWORD * pdwMinDecideData, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ExamineData) (ISCPSecureQuery * This, UINT fuFlags, LPWSTR pwszExtension, BYTE * pData, DWORD dwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * MakeDecision) (ISCPSecureQuery * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, ISCPSecureExchange ** ppExchange, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetRights) (ISCPSecureQuery * This, BYTE * pData, DWORD dwSize, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStgGlobals, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	END_INTERFACE
}  ISCPSecureQueryVtbl;
interface ISCPSecureQuery
{
	CONST_VTBL struct ISCPSecureQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureQuery_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureQuery_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureQuery_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureQuery_GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
#define ISCPSecureQuery_ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
#define ISCPSecureQuery_MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
#define ISCPSecureQuery_GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
#endif
#endif
#ifndef __ISCPSecureQuery2_INTERFACE_DEFINED__
#define __ISCPSecureQuery2_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureQuery2;
typedef struct ISCPSecureQuery2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureQuery2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureQuery2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureQuery2 * This);
	HRESULT(STDMETHODCALLTYPE * GetDataDemands) (ISCPSecureQuery2 * This, UINT * pfuFlags, DWORD * pdwMinRightsData, DWORD * pdwMinExamineData, DWORD * pdwMinDecideData, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ExamineData) (ISCPSecureQuery2 * This, UINT fuFlags, LPWSTR pwszExtension, BYTE * pData, DWORD dwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * MakeDecision) (ISCPSecureQuery2 * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, ISCPSecureExchange ** ppExchange, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetRights) (ISCPSecureQuery2 * This, BYTE * pData, DWORD dwSize, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStgGlobals, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * MakeDecision2) (ISCPSecureQuery2 * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, BYTE * pAppCertApp, DWORD dwAppCertAppLen, BYTE * pAppCertSP, DWORD dwAppCertSPLen, LPWSTR * pszRevocationURL, DWORD * pdwRevocationURLLen, DWORD * pdwRevocationBitFlag, ULONGLONG * pqwFileSize, IUnknown * pUnknown, ISCPSecureExchange ** ppExchange, BYTE abMac[8]);
	END_INTERFACE
}  ISCPSecureQuery2Vtbl;
interface ISCPSecureQuery2
{
	CONST_VTBL struct ISCPSecureQuery2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureQuery2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureQuery2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureQuery2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureQuery2_GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
#define ISCPSecureQuery2_ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
#define ISCPSecureQuery2_MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
#define ISCPSecureQuery2_GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
#define ISCPSecureQuery2_MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) ( (This)->lpVtbl -> MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) )
#endif
#endif
#ifndef __ISCPSecureExchange_INTERFACE_DEFINED__
#define __ISCPSecureExchange_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureExchange;
typedef struct ISCPSecureExchangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureExchange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureExchange * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureExchange * This);
	HRESULT(STDMETHODCALLTYPE * TransferContainerData) (ISCPSecureExchange * This, BYTE * pData, DWORD dwSize, UINT * pfuReadyFlags, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ObjectData) (ISCPSecureExchange * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * TransferComplete) (ISCPSecureExchange * This);
	END_INTERFACE
}  ISCPSecureExchangeVtbl;
interface ISCPSecureExchange
{
	CONST_VTBL struct ISCPSecureExchangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureExchange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureExchange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureExchange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureExchange_TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
#define ISCPSecureExchange_ObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
#define ISCPSecureExchange_TransferComplete(This) ( (This)->lpVtbl -> TransferComplete(This) )
#endif
#endif
#ifndef __ISCPSecureExchange2_INTERFACE_DEFINED__
#define __ISCPSecureExchange2_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureExchange2;
typedef struct ISCPSecureExchange2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureExchange2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureExchange2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureExchange2 * This);
	HRESULT(STDMETHODCALLTYPE * TransferContainerData) (ISCPSecureExchange2 * This, BYTE * pData, DWORD dwSize, UINT * pfuReadyFlags, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ObjectData) (ISCPSecureExchange2 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * TransferComplete) (ISCPSecureExchange2 * This);
	HRESULT(STDMETHODCALLTYPE * TransferContainerData2) (ISCPSecureExchange2 * This, BYTE * pData, DWORD dwSize, IWMDMProgress3 * pProgressCallback, UINT * pfuReadyFlags, BYTE abMac[8]);
	END_INTERFACE
}  ISCPSecureExchange2Vtbl;
interface ISCPSecureExchange2
{
	CONST_VTBL struct ISCPSecureExchange2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureExchange2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureExchange2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureExchange2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureExchange2_TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
#define ISCPSecureExchange2_ObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
#define ISCPSecureExchange2_TransferComplete(This) ( (This)->lpVtbl -> TransferComplete(This) )
#define ISCPSecureExchange2_TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) ( (This)->lpVtbl -> TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) )
#endif
#endif
#ifndef __ISCPSecureExchange3_INTERFACE_DEFINED__
#define __ISCPSecureExchange3_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureExchange3;
typedef struct ISCPSecureExchange3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureExchange3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureExchange3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureExchange3 * This);
	HRESULT(STDMETHODCALLTYPE * TransferContainerData) (ISCPSecureExchange3 * This, BYTE * pData, DWORD dwSize, UINT * pfuReadyFlags, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ObjectData) (ISCPSecureExchange3 * This, BYTE * pData, DWORD * pdwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * TransferComplete) (ISCPSecureExchange3 * This);
	HRESULT(STDMETHODCALLTYPE * TransferContainerData2) (ISCPSecureExchange3 * This, BYTE * pData, DWORD dwSize, IWMDMProgress3 * pProgressCallback, UINT * pfuReadyFlags, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * TransferContainerDataOnClearChannel) (ISCPSecureExchange3 * This, IMDSPDevice * pDevice, BYTE * pData, DWORD dwSize, IWMDMProgress3 * pProgressCallback, UINT * pfuReadyFlags);
	HRESULT(STDMETHODCALLTYPE * GetObjectDataOnClearChannel) (ISCPSecureExchange3 * This, IMDSPDevice * pDevice, BYTE * pData, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * TransferCompleteForDevice) (ISCPSecureExchange3 * This, IMDSPDevice * pDevice);
	END_INTERFACE
}  ISCPSecureExchange3Vtbl;
interface ISCPSecureExchange3
{
	CONST_VTBL struct ISCPSecureExchange3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureExchange3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureExchange3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureExchange3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureExchange3_TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) ( (This)->lpVtbl -> TransferContainerData(This,pData,dwSize,pfuReadyFlags,abMac) )
#define ISCPSecureExchange3_ObjectData(This,pData,pdwSize,abMac) ( (This)->lpVtbl -> ObjectData(This,pData,pdwSize,abMac) )
#define ISCPSecureExchange3_TransferComplete(This) ( (This)->lpVtbl -> TransferComplete(This) )
#define ISCPSecureExchange3_TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) ( (This)->lpVtbl -> TransferContainerData2(This,pData,dwSize,pProgressCallback,pfuReadyFlags,abMac) )
#define ISCPSecureExchange3_TransferContainerDataOnClearChannel(This,pDevice,pData,dwSize,pProgressCallback,pfuReadyFlags) ( (This)->lpVtbl -> TransferContainerDataOnClearChannel(This,pDevice,pData,dwSize,pProgressCallback,pfuReadyFlags) )
#define ISCPSecureExchange3_GetObjectDataOnClearChannel(This,pDevice,pData,pdwSize) ( (This)->lpVtbl -> GetObjectDataOnClearChannel(This,pDevice,pData,pdwSize) )
#define ISCPSecureExchange3_TransferCompleteForDevice(This,pDevice) ( (This)->lpVtbl -> TransferCompleteForDevice(This,pDevice) )
#endif
#endif
#ifndef __ISCPSession_INTERFACE_DEFINED__
#define __ISCPSession_INTERFACE_DEFINED__
extern const IID IID_ISCPSession;
typedef struct ISCPSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSession * This);
	HRESULT(STDMETHODCALLTYPE * BeginSession) (ISCPSession * This, IMDSPDevice * pIDevice, BYTE * pCtx, DWORD dwSizeCtx);
	HRESULT(STDMETHODCALLTYPE * EndSession) (ISCPSession * This, BYTE * pCtx, DWORD dwSizeCtx);
	HRESULT(STDMETHODCALLTYPE * GetSecureQuery) (ISCPSession * This, ISCPSecureQuery ** ppSecureQuery);
	END_INTERFACE
}  ISCPSessionVtbl;
interface ISCPSession
{
	CONST_VTBL struct ISCPSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSession_BeginSession(This,pIDevice,pCtx,dwSizeCtx) ( (This)->lpVtbl -> BeginSession(This,pIDevice,pCtx,dwSizeCtx) )
#define ISCPSession_EndSession(This,pCtx,dwSizeCtx) ( (This)->lpVtbl -> EndSession(This,pCtx,dwSizeCtx) )
#define ISCPSession_GetSecureQuery(This,ppSecureQuery) ( (This)->lpVtbl -> GetSecureQuery(This,ppSecureQuery) )
#endif
#endif
#ifndef __ISCPSecureQuery3_INTERFACE_DEFINED__
#define __ISCPSecureQuery3_INTERFACE_DEFINED__
extern const IID IID_ISCPSecureQuery3;
typedef struct ISCPSecureQuery3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCPSecureQuery3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCPSecureQuery3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCPSecureQuery3 * This);
	HRESULT(STDMETHODCALLTYPE * GetDataDemands) (ISCPSecureQuery3 * This, UINT * pfuFlags, DWORD * pdwMinRightsData, DWORD * pdwMinExamineData, DWORD * pdwMinDecideData, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * ExamineData) (ISCPSecureQuery3 * This, UINT fuFlags, LPWSTR pwszExtension, BYTE * pData, DWORD dwSize, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * MakeDecision) (ISCPSecureQuery3 * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, ISCPSecureExchange ** ppExchange, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetRights) (ISCPSecureQuery3 * This, BYTE * pData, DWORD dwSize, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStgGlobals, PWMDMRIGHTS * ppRights, UINT * pnRightsCount, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * MakeDecision2) (ISCPSecureQuery3 * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, BYTE * pAppCertApp, DWORD dwAppCertAppLen, BYTE * pAppCertSP, DWORD dwAppCertSPLen, LPWSTR * pszRevocationURL, DWORD * pdwRevocationURLLen, DWORD * pdwRevocationBitFlag, ULONGLONG * pqwFileSize, IUnknown * pUnknown, ISCPSecureExchange ** ppExchange, BYTE abMac[8]);
	HRESULT(STDMETHODCALLTYPE * GetRightsOnClearChannel) (ISCPSecureQuery3 * This, BYTE * pData, DWORD dwSize, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStgGlobals, IWMDMProgress3 * pProgressCallback, PWMDMRIGHTS * ppRights, UINT * pnRightsCount);
	HRESULT(STDMETHODCALLTYPE * MakeDecisionOnClearChannel) (ISCPSecureQuery3 * This, UINT fuFlags, BYTE * pData, DWORD dwSize, DWORD dwAppSec, BYTE * pbSPSessionKey, DWORD dwSessionKeyLen, IMDSPStorageGlobals * pStorageGlobals, IWMDMProgress3 * pProgressCallback, BYTE * pAppCertApp, DWORD dwAppCertAppLen, BYTE * pAppCertSP, DWORD dwAppCertSPLen, LPWSTR * pszRevocationURL, DWORD * pdwRevocationURLLen, DWORD * pdwRevocationBitFlag, ULONGLONG * pqwFileSize, IUnknown * pUnknown, ISCPSecureExchange ** ppExchange);
	END_INTERFACE
}  ISCPSecureQuery3Vtbl;
interface ISCPSecureQuery3
{
	CONST_VTBL struct ISCPSecureQuery3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCPSecureQuery3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCPSecureQuery3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISCPSecureQuery3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISCPSecureQuery3_GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) ( (This)->lpVtbl -> GetDataDemands(This,pfuFlags,pdwMinRightsData,pdwMinExamineData,pdwMinDecideData,abMac) )
#define ISCPSecureQuery3_ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) ( (This)->lpVtbl -> ExamineData(This,fuFlags,pwszExtension,pData,dwSize,abMac) )
#define ISCPSecureQuery3_MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) ( (This)->lpVtbl -> MakeDecision(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,ppExchange,abMac) )
#define ISCPSecureQuery3_GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) ( (This)->lpVtbl -> GetRights(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,ppRights,pnRightsCount,abMac) )
#define ISCPSecureQuery3_MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) ( (This)->lpVtbl -> MakeDecision2(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange,abMac) )
#define ISCPSecureQuery3_GetRightsOnClearChannel(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,pProgressCallback,ppRights,pnRightsCount) ( (This)->lpVtbl -> GetRightsOnClearChannel(This,pData,dwSize,pbSPSessionKey,dwSessionKeyLen,pStgGlobals,pProgressCallback,ppRights,pnRightsCount) )
#define ISCPSecureQuery3_MakeDecisionOnClearChannel(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pProgressCallback,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange) ( (This)->lpVtbl -> MakeDecisionOnClearChannel(This,fuFlags,pData,dwSize,dwAppSec,pbSPSessionKey,dwSessionKeyLen,pStorageGlobals,pProgressCallback,pAppCertApp,dwAppCertAppLen,pAppCertSP,dwAppCertSPLen,pszRevocationURL,pdwRevocationURLLen,pdwRevocationBitFlag,pqwFileSize,pUnknown,ppExchange) )
#endif
#endif
#define SAC_MAC_LEN 8
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0056_v0_0_s_ifspec;
#ifndef __IComponentAuthenticate_INTERFACE_DEFINED__
#define __IComponentAuthenticate_INTERFACE_DEFINED__
extern const IID IID_IComponentAuthenticate;
typedef struct IComponentAuthenticateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponentAuthenticate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponentAuthenticate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponentAuthenticate * This);
	HRESULT(STDMETHODCALLTYPE * SACAuth) (IComponentAuthenticate * This, DWORD dwProtocolID, DWORD dwPass, BYTE * pbDataIn, DWORD dwDataInLen, BYTE ** ppbDataOut, DWORD * pdwDataOutLen);
	HRESULT(STDMETHODCALLTYPE * SACGetProtocols) (IComponentAuthenticate * This, DWORD ** ppdwProtocols, DWORD * pdwProtocolCount);
	END_INTERFACE
}  IComponentAuthenticateVtbl;
interface IComponentAuthenticate
{
	CONST_VTBL struct IComponentAuthenticateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentAuthenticate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentAuthenticate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IComponentAuthenticate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IComponentAuthenticate_SACAuth(This,dwProtocolID,dwPass,pbDataIn,dwDataInLen,ppbDataOut,pdwDataOutLen) ( (This)->lpVtbl -> SACAuth(This,dwProtocolID,dwPass,pbDataIn,dwDataInLen,ppbDataOut,pdwDataOutLen) )
#define IComponentAuthenticate_SACGetProtocols(This,ppdwProtocols,pdwProtocolCount) ( (This)->lpVtbl -> SACGetProtocols(This,ppdwProtocols,pdwProtocolCount) )
#endif
#endif
DEFINE_GUID (EVENT_WMDM_CONTENT_TRANSFER, 0x339C9BF4, 0xBCFE, 0x4ED8, 0x94, 0xDF, 0xEA, 0xF8, 0xC2, 0x6A, 0xB6, 0x1B);
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mswmdm_0000_0057_v0_0_s_ifspec;
#ifndef __MSWMDMLib_LIBRARY_DEFINED__
#define __MSWMDMLib_LIBRARY_DEFINED__
extern const IID LIBID_MSWMDMLib;
extern const CLSID CLSID_MediaDevMgrClassFactory;
extern const CLSID CLSID_MediaDevMgr;
extern const CLSID CLSID_WMDMDevice;
extern const CLSID CLSID_WMDMStorage;
extern const CLSID CLSID_WMDMStorageGlobal;
extern const CLSID CLSID_WMDMDeviceEnum;
extern const CLSID CLSID_WMDMStorageEnum;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

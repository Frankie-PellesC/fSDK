/*+@@file@@----------------------------------------------------------------*//*!
 \file		Icm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:21:10 2016
 \date		Modified on Sat Jul 16 19:21:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ICM_H_
#define _ICM_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef char COLOR_NAME[32];
typedef COLOR_NAME *PCOLOR_NAME, *LPCOLOR_NAME;
typedef struct tagNAMED_PROFILE_INFO
{
	DWORD           dwFlags;
	DWORD           dwCount;
	DWORD           dwCountDevCoordinates;
	COLOR_NAME      szPrefix;
	COLOR_NAME      szSuffix;
} NAMED_PROFILE_INFO;
typedef NAMED_PROFILE_INFO *PNAMED_PROFILE_INFO, *LPNAMED_PROFILE_INFO;
#define MAX_COLOR_CHANNELS  8
struct GRAYCOLOR
{
    WORD    gray;
};
struct RGBCOLOR
{
    WORD    red;
    WORD    green;
    WORD    blue;
};
struct CMYKCOLOR
{
    WORD    cyan;
    WORD    magenta;
    WORD    yellow;
    WORD    black;
};
struct XYZCOLOR
{
    WORD    X;
    WORD    Y;
    WORD    Z;
};
struct YxyCOLOR
{
    WORD    Y;
    WORD    x;
    WORD    y;
};
struct LabCOLOR
{
    WORD    L;
    WORD    a;
    WORD    b;
};
struct GENERIC3CHANNEL
{
    WORD    ch1;
    WORD    ch2;
    WORD    ch3;
};
struct NAMEDCOLOR
{
    DWORD        dwIndex;
};
struct HiFiCOLOR
{
    BYTE    channel[MAX_COLOR_CHANNELS];
};
#if _MSC_VER > 1200
#pragma warning(push)
#pragma warning(disable:4201)
#endif
typedef union tagCOLOR
{
    struct GRAYCOLOR        gray;
    struct RGBCOLOR         rgb;
    struct CMYKCOLOR        cmyk;
    struct XYZCOLOR         XYZ;
    struct YxyCOLOR         Yxy;
    struct LabCOLOR         Lab;
    struct GENERIC3CHANNEL  gen3ch;
    struct NAMEDCOLOR       named;
    struct HiFiCOLOR        hifi;
    struct
	{
        DWORD reserved1;
        VOID *reserved2;
    };
} COLOR;
typedef COLOR *PCOLOR, *LPCOLOR;
#if _MSC_VER > 1200
#pragma warning(pop)
#endif
typedef enum
{
    COLOR_GRAY =   1,
    COLOR_RGB,
    COLOR_XYZ,
    COLOR_Yxy,
    COLOR_Lab,
    COLOR_3_CHANNEL,
    COLOR_CMYK,
    COLOR_5_CHANNEL,
    COLOR_6_CHANNEL,
    COLOR_7_CHANNEL,
    COLOR_8_CHANNEL,
    COLOR_NAMED,
} COLORTYPE;
typedef COLORTYPE *PCOLORTYPE, *LPCOLORTYPE;
#define INTENT_PERCEPTUAL               0
#define INTENT_RELATIVE_COLORIMETRIC    1
#define INTENT_SATURATION               2
#define INTENT_ABSOLUTE_COLORIMETRIC    3
#if NTDDI_VERSION >= NTDDI_VISTA
typedef enum
{
    CPT_ICC,
    CPT_DMP,
    CPT_CAMP,
    CPT_GMMP
} COLORPROFILETYPE;
typedef COLORPROFILETYPE *PCOLORPROFILETYPE, *LPCOLORPROFILETYPE;
typedef enum
{
    CPST_PERCEPTUAL             = INTENT_PERCEPTUAL,
    CPST_RELATIVE_COLORIMETRIC  = INTENT_RELATIVE_COLORIMETRIC,
    CPST_SATURATION             = INTENT_SATURATION,
    CPST_ABSOLUTE_COLORIMETRIC  = INTENT_ABSOLUTE_COLORIMETRIC,
    CPST_NONE,
    CPST_RGB_WORKING_SPACE,
    CPST_CUSTOM_WORKING_SPACE,
} COLORPROFILESUBTYPE;
typedef COLORPROFILESUBTYPE *PCOLORPROFILESUBTYPE, *LPCOLORPROFILESUBTYPE;
typedef enum
{
    COLOR_BYTE       =   1,
    COLOR_WORD,
    COLOR_FLOAT,
    COLOR_S2DOT13FIXED,
    COLOR_10b_R10G10B10A2,
    COLOR_10b_R10G10B10A2_XR,
    COLOR_FLOAT16
} COLORDATATYPE;
typedef COLORDATATYPE *PCOLORDATATYPE, *LPCOLORDATATYPE;
#endif
typedef enum
{
    BM_x555RGB      = 0x0000,
    BM_x555XYZ      = 0x0101,
    BM_x555Yxy,
    BM_x555Lab,
    BM_x555G3CH,
    BM_RGBTRIPLETS  = 0x0002,
    BM_BGRTRIPLETS  = 0x0004,
    BM_XYZTRIPLETS  = 0x0201,
    BM_YxyTRIPLETS,
    BM_LabTRIPLETS,
    BM_G3CHTRIPLETS,
    BM_5CHANNEL,
    BM_6CHANNEL,
    BM_7CHANNEL,
    BM_8CHANNEL,
    BM_GRAY,
    BM_xRGBQUADS    = 0x0008,
    BM_xBGRQUADS    = 0x0010,
    BM_xG3CHQUADS   = 0x0304,
    BM_KYMCQUADS,
    BM_CMYKQUADS    = 0x0020,
    BM_10b_RGB      = 0x0009,
    BM_10b_XYZ      = 0x0401,
    BM_10b_Yxy,
    BM_10b_Lab,
    BM_10b_G3CH,
    BM_NAMED_INDEX,
    BM_16b_RGB      = 0x000A,
    BM_16b_XYZ      = 0x0501,
    BM_16b_Yxy,
    BM_16b_Lab,
    BM_16b_G3CH,
    BM_16b_GRAY,
    BM_565RGB       = 0x0001,
    BM_32b_scRGB            = 0x0601,
    BM_32b_scARGB           = 0x0602,
    BM_S2DOT13FIXED_scRGB   = 0x0603,
    BM_S2DOT13FIXED_scARGB  = 0x0604,
    BM_R10G10B10A2          = 0x0701,
    BM_R10G10B10A2_XR        = 0x0702,
    BM_R16G16B16A16_FLOAT   = 0x0703
} BMFORMAT;
typedef BMFORMAT *PBMFORMAT, *LPBMFORMAT;
typedef BOOL (WINAPI *PBMCALLBACKFN)(ULONG, ULONG, LPARAM);
typedef PBMCALLBACKFN LPBMCALLBACKFN;
typedef struct tagPROFILEHEADER
{
    DWORD   phSize;
    DWORD   phCMMType;
    DWORD   phVersion;
    DWORD   phClass;
    DWORD   phDataColorSpace;
    DWORD   phConnectionSpace;
    DWORD   phDateTime[3];
    DWORD   phSignature;
    DWORD   phPlatform;
    DWORD   phProfileFlags;
    DWORD   phManufacturer;
    DWORD   phModel;
    DWORD   phAttributes[2];
    DWORD   phRenderingIntent;
    CIEXYZ  phIlluminant;
    DWORD   phCreator;
    BYTE    phReserved[44];
} PROFILEHEADER;
typedef PROFILEHEADER *PPROFILEHEADER, *LPPROFILEHEADER;
#define CLASS_MONITOR           'mntr'
#define CLASS_PRINTER           'prtr'
#define CLASS_SCANNER           'scnr'
#define CLASS_LINK              'link'
#define CLASS_ABSTRACT          'abst'
#define CLASS_COLORSPACE        'spac'
#define CLASS_NAMED             'nmcl'
#if NTDDI_VERSION >= NTDDI_VISTA
#define CLASS_CAMP              'camp'
#define CLASS_GMMP              'gmmp'
#endif
#define SPACE_XYZ               'XYZ '
#define SPACE_Lab               'Lab '
#define SPACE_Luv               'Luv '
#define SPACE_YCbCr             'YCbr'
#define SPACE_Yxy               'Yxy '
#define SPACE_RGB               'RGB '
#define SPACE_GRAY              'GRAY'
#define SPACE_HSV               'HSV '
#define SPACE_HLS               'HLS '
#define SPACE_CMYK              'CMYK'
#define SPACE_CMY               'CMY '
#define SPACE_2_CHANNEL         '2CLR'
#define SPACE_3_CHANNEL         '3CLR'
#define SPACE_4_CHANNEL         '4CLR'
#define SPACE_5_CHANNEL         '5CLR'
#define SPACE_6_CHANNEL         '6CLR'
#define SPACE_7_CHANNEL         '7CLR'
#define SPACE_8_CHANNEL         '8CLR'
#define FLAG_EMBEDDEDPROFILE    0x00000001
#define FLAG_DEPENDENTONDATA    0x00000002
#if NTDDI_VERSION >= NTDDI_VISTA
#define FLAG_ENABLE_CHROMATIC_ADAPTATION 0x02000000
#endif
#define ATTRIB_TRANSPARENCY     0x00000001
#define ATTRIB_MATTE            0x00000002
typedef struct tagPROFILE
{
    DWORD   dwType;
    PVOID   pProfileData;
    DWORD   cbDataSize;
} PROFILE;
typedef PROFILE *PPROFILE, *LPPROFILE;
#define PROFILE_FILENAME    1
#define PROFILE_MEMBUFFER   2
#define PROFILE_READ        1
#define PROFILE_READWRITE   2
typedef HANDLE HPROFILE;
typedef HPROFILE *PHPROFILE;
typedef HANDLE HTRANSFORM;
#define INDEX_DONT_CARE     0
#define CMM_FROM_PROFILE    INDEX_DONT_CARE
#define CMM_WINDOWS_DEFAULT 'Win '
typedef DWORD      TAGTYPE;
typedef TAGTYPE   *PTAGTYPE, *LPTAGTYPE;
#define ENUM_TYPE_VERSION    0x0300
typedef struct tagENUMTYPEA
{
    DWORD   dwSize;
    DWORD   dwVersion;
    DWORD   dwFields;
    PCSTR   pDeviceName;
    DWORD   dwMediaType;
    DWORD   dwDitheringMode;
    DWORD   dwResolution[2];
    DWORD   dwCMMType;
    DWORD   dwClass;
    DWORD   dwDataColorSpace;
    DWORD   dwConnectionSpace;
    DWORD   dwSignature;
    DWORD   dwPlatform;
    DWORD   dwProfileFlags;
    DWORD   dwManufacturer;
    DWORD   dwModel;
    DWORD   dwAttributes[2];
    DWORD   dwRenderingIntent;
    DWORD   dwCreator;
    DWORD   dwDeviceClass;
} ENUMTYPEA, *PENUMTYPEA, *LPENUMTYPEA;
typedef struct tagENUMTYPEW
{
    DWORD   dwSize;
    DWORD   dwVersion;
    DWORD   dwFields;
    PCWSTR  pDeviceName;
    DWORD   dwMediaType;
    DWORD   dwDitheringMode;
    DWORD   dwResolution[2];
    DWORD   dwCMMType;
    DWORD   dwClass;
    DWORD   dwDataColorSpace;
    DWORD   dwConnectionSpace;
    DWORD   dwSignature;
    DWORD   dwPlatform;
    DWORD   dwProfileFlags;
    DWORD   dwManufacturer;
    DWORD   dwModel;
    DWORD   dwAttributes[2];
    DWORD   dwRenderingIntent;
    DWORD   dwCreator;
    DWORD   dwDeviceClass;
} ENUMTYPEW, *PENUMTYPEW, *LPENUMTYPEW;
#define ET_DEVICENAME           0x00000001
#define ET_MEDIATYPE            0x00000002
#define ET_DITHERMODE           0x00000004
#define ET_RESOLUTION           0x00000008
#define ET_CMMTYPE              0x00000010
#define ET_CLASS                0x00000020
#define ET_DATACOLORSPACE       0x00000040
#define ET_CONNECTIONSPACE      0x00000080
#define ET_SIGNATURE            0x00000100
#define ET_PLATFORM             0x00000200
#define ET_PROFILEFLAGS         0x00000400
#define ET_MANUFACTURER         0x00000800
#define ET_MODEL                0x00001000
#define ET_ATTRIBUTES           0x00002000
#define ET_RENDERINGINTENT      0x00004000
#define ET_CREATOR              0x00008000
#define ET_DEVICECLASS          0x00010000
#if NTDDI_VERSION >= NTDDI_VISTA
typedef enum
{
    WCS_PROFILE_MANAGEMENT_SCOPE_SYSTEM_WIDE,
    WCS_PROFILE_MANAGEMENT_SCOPE_CURRENT_USER
} WCS_PROFILE_MANAGEMENT_SCOPE;
#endif
#define PROOF_MODE                  0x00000001
#define NORMAL_MODE                 0x00000002
#define BEST_MODE                   0x00000003
#define ENABLE_GAMUT_CHECKING       0x00010000
#define USE_RELATIVE_COLORIMETRIC   0x00020000
#define FAST_TRANSLATE              0x00040000
#if NTDDI_VERSION >= NTDDI_VISTA
#define PRESERVEBLACK               0x00100000
#define WCS_ALWAYS                  0x00200000
#define SEQUENTIAL_TRANSFORM        0x80800000
#endif
#define RESERVED                    0x80000000
#define CSA_A                   1
#define CSA_ABC                 2
#define CSA_DEF                 3
#define CSA_DEFG                4
#define CSA_GRAY                5
#define CSA_RGB                 6
#define CSA_CMYK                7
#define CSA_Lab                 8
#define CMM_WIN_VERSION     0
#define CMM_IDENT           1
#define CMM_DRIVER_VERSION  2
#define CMM_DLL_VERSION     3
#define CMM_VERSION         4
#define CMM_DESCRIPTION     5
#define CMM_LOGOICON        6
#define CMS_FORWARD         0
#define CMS_BACKWARD        1
#define COLOR_MATCH_VERSION  0x0200
#define CMS_DISABLEICM          1
#define CMS_ENABLEPROOFING      2
#define CMS_SETRENDERINTENT     4
#define CMS_SETPROOFINTENT      8
#define CMS_SETMONITORPROFILE   0x10
#define CMS_SETPRINTERPROFILE   0x20
#define CMS_SETTARGETPROFILE    0x40
#define CMS_USEHOOK             0x80
#define CMS_USEAPPLYCALLBACK    0x100
#define CMS_USEDESCRIPTION      0x200
#define CMS_DISABLEINTENT       0x400
#define CMS_DISABLERENDERINTENT 0x800
#define CMS_MONITOROVERFLOW     0x80000000L
#define CMS_PRINTEROVERFLOW     0x40000000L
#define CMS_TARGETOVERFLOW      0x20000000L
struct _tagCOLORMATCHSETUPW;
struct _tagCOLORMATCHSETUPA;
typedef BOOL (WINAPI *PCMSCALLBACKW)(struct _tagCOLORMATCHSETUPW *,LPARAM);
typedef BOOL (WINAPI *PCMSCALLBACKA)(struct _tagCOLORMATCHSETUPA *,LPARAM);
typedef struct _tagCOLORMATCHSETUPW
{
    DWORD   dwSize;
    DWORD   dwVersion;
    DWORD   dwFlags;
    HWND    hwndOwner;
    PCWSTR  pSourceName;
    PCWSTR  pDisplayName;
    PCWSTR  pPrinterName;
    DWORD   dwRenderIntent;
    DWORD   dwProofingIntent;
    PWSTR   pMonitorProfile;
    DWORD   ccMonitorProfile;
    PWSTR   pPrinterProfile;
    DWORD   ccPrinterProfile;
    PWSTR   pTargetProfile;
    DWORD   ccTargetProfile;
    DLGPROC lpfnHook;
    LPARAM  lParam;
    PCMSCALLBACKW lpfnApplyCallback;
    LPARAM        lParamApplyCallback;
}   COLORMATCHSETUPW, *PCOLORMATCHSETUPW, *LPCOLORMATCHSETUPW;
typedef struct _tagCOLORMATCHSETUPA
{
    DWORD   dwSize;
    DWORD   dwVersion;
    DWORD   dwFlags;
    HWND    hwndOwner;
    PCSTR   pSourceName;
    PCSTR   pDisplayName;
    PCSTR   pPrinterName;
    DWORD   dwRenderIntent;
    DWORD   dwProofingIntent;
    PSTR    pMonitorProfile;
    DWORD   ccMonitorProfile;
    PSTR    pPrinterProfile;
    DWORD   ccPrinterProfile;
    PSTR    pTargetProfile;
    DWORD   ccTargetProfile;
    DLGPROC lpfnHook;
    LPARAM  lParam;
    PCMSCALLBACKA lpfnApplyCallback;
    LPARAM        lParamApplyCallback;
}   COLORMATCHSETUPA, *PCOLORMATCHSETUPA, *LPCOLORMATCHSETUPA;
HPROFILE   WINAPI OpenColorProfileA(PPROFILE pProfile, DWORD dwDesiredAccess, DWORD dwShareMode, DWORD dwCreationMode);
HPROFILE   WINAPI OpenColorProfileW(PPROFILE pProfile, DWORD dwDesiredAccess, DWORD dwShareMode, DWORD dwCreationMode);
BOOL       WINAPI CloseColorProfile(HPROFILE hProfile);
BOOL       WINAPI GetColorProfileFromHandle(HPROFILE hProfile, PBYTE pProfile, PDWORD pcbProfile);
BOOL       WINAPI IsColorProfileValid(HPROFILE hProfile, PBOOL pbValid);
BOOL       WINAPI CreateProfileFromLogColorSpaceA(LPLOGCOLORSPACEA pLogColorSpace, PBYTE* pProfile);
BOOL       WINAPI CreateProfileFromLogColorSpaceW(LPLOGCOLORSPACEW pLogColorSpace, PBYTE* pProfile);
BOOL       WINAPI GetCountColorProfileElements(HPROFILE hProfile, PDWORD pnElementCount);
BOOL       WINAPI GetColorProfileHeader(HPROFILE hProfile, PPROFILEHEADER pHeader);
BOOL       WINAPI GetColorProfileElementTag(HPROFILE hProfile, DWORD dwIndex, PTAGTYPE pTag);
BOOL       WINAPI IsColorProfileTagPresent(HPROFILE hProfile, TAGTYPE tag, PBOOL pbPresent);
BOOL       WINAPI GetColorProfileElement(HPROFILE hProfile, TAGTYPE tag, DWORD dwOffset, PDWORD pcbElement, PVOID pElement, PBOOL pbReference);
BOOL       WINAPI SetColorProfileHeader(HPROFILE hProfile, PPROFILEHEADER pHeader);
BOOL       WINAPI SetColorProfileElementSize(HPROFILE hProfile, TAGTYPE tagType, DWORD pcbElement);
BOOL       WINAPI SetColorProfileElement(HPROFILE hProfile, TAGTYPE tag, DWORD dwOffset, PDWORD pcbElement, PVOID pElement);
BOOL       WINAPI SetColorProfileElementReference(HPROFILE hProfile, TAGTYPE newTag, TAGTYPE refTag);
BOOL       WINAPI GetPS2ColorSpaceArray(HPROFILE hProfile, DWORD dwIntent, DWORD dwCSAType, PBYTE pPS2ColorSpaceArray, PDWORD pcbPS2ColorSpaceArray, PBOOL pbBinary);
BOOL       WINAPI GetPS2ColorRenderingIntent(HPROFILE hProfile, DWORD dwIntent, PBYTE pBuffer, PDWORD pcbPS2ColorRenderingIntent);
BOOL       WINAPI GetPS2ColorRenderingDictionary(HPROFILE hProfile, DWORD dwIntent, PBYTE pPS2ColorRenderingDictionary, PDWORD pcbPS2ColorRenderingDictionary, PBOOL pbBinary);
BOOL       WINAPI GetNamedProfileInfo(HPROFILE hProfile, PNAMED_PROFILE_INFO pNamedProfileInfo);
BOOL       WINAPI ConvertColorNameToIndex(HPROFILE hProfile, PCOLOR_NAME paColorName, PDWORD paIndex, DWORD dwCount);
BOOL       WINAPI ConvertIndexToColorName(HPROFILE hProfile, PDWORD paIndex, PCOLOR_NAME paColorName, DWORD dwCount);
BOOL       WINAPI CreateDeviceLinkProfile(PHPROFILE hProfile, DWORD nProfiles, PDWORD padwIntent, DWORD nIntents, DWORD dwFlags, PBYTE* pProfileData, DWORD indexPreferredCMM);
HTRANSFORM WINAPI CreateColorTransformA(LPLOGCOLORSPACEA pLogColorSpace, HPROFILE hDestProfile, HPROFILE hTargetProfile, DWORD dwFlags);
HTRANSFORM WINAPI CreateColorTransformW(LPLOGCOLORSPACEW pLogColorSpace, HPROFILE hDestProfile, HPROFILE hTargetProfile, DWORD dwFlags);
HTRANSFORM WINAPI CreateMultiProfileTransform(PHPROFILE pahProfiles, DWORD nProfiles, PDWORD padwIntent, DWORD nIntents, DWORD dwFlags, DWORD indexPreferredCMM);
BOOL       WINAPI DeleteColorTransform(HTRANSFORM hxform);
BOOL       WINAPI TranslateBitmapBits(HTRANSFORM hColorTransform, PVOID pSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwInputStride, PVOID pDestBits, BMFORMAT bmOutput, DWORD dwOutputStride, PBMCALLBACKFN pfnCallBack, LPARAM ulCallbackData);
BOOL       WINAPI CheckBitmapBits(HTRANSFORM hColorTransform, PVOID pSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwStride, PBYTE paResult, PBMCALLBACKFN pfnCallback, LPARAM lpCallbackData);
BOOL       WINAPI TranslateColors(HTRANSFORM hColorTransform, PCOLOR paInputColors, DWORD nColors, COLORTYPE ctInput, PCOLOR paOutputColors, COLORTYPE ctOutput);
BOOL       WINAPI CheckColors(HTRANSFORM hColorTransform, PCOLOR paInputColors, DWORD nColors, COLORTYPE ctInput, PBYTE paResult);
DWORD      WINAPI GetCMMInfo(HTRANSFORM hColorTransform, DWORD);
BOOL       WINAPI RegisterCMMA(PCSTR pMachineName, DWORD cmmID, PCSTR pCMMdll);
BOOL       WINAPI RegisterCMMW(PCWSTR pMachineName, DWORD cmmID, PCWSTR pCMMdll);
BOOL       WINAPI UnregisterCMMA(PCSTR pMachineName, DWORD cmmID);
BOOL       WINAPI UnregisterCMMW(PCWSTR pMachineName, DWORD cmmID);
BOOL       WINAPI SelectCMM(DWORD dwCMMType);
BOOL       WINAPI GetColorDirectoryA(PCSTR pMachineName, PSTR pBuffer, PDWORD pdwSize);
BOOL       WINAPI GetColorDirectoryW(PCWSTR pMachineName, PWSTR pBuffer, PDWORD pdwSize);
BOOL       WINAPI InstallColorProfileA(PCSTR  pMachineName, PCSTR  pProfileName);
BOOL       WINAPI InstallColorProfileW(PCWSTR pMachineName, PCWSTR pProfileName);
BOOL       WINAPI UninstallColorProfileA(PCSTR  pMachineName, PCSTR pProfileName,  BOOL bDelete);
BOOL       WINAPI UninstallColorProfileW(PCWSTR pMachineName, PCWSTR pProfileName, BOOL bDelete);
BOOL       WINAPI EnumColorProfilesA(PCSTR  pMachineName, PENUMTYPEA pEnumRecord, PBYTE pEnumerationBuffer, PDWORD pdwSizeOfEnumerationBuffer, PDWORD pnProfiles);
BOOL       WINAPI EnumColorProfilesW(PCWSTR pMachineName, PENUMTYPEW pEnumRecord, PBYTE pEnumerationBuffer, PDWORD pdwSizeOfEnumerationBuffer, PDWORD pnProfiles);
BOOL       WINAPI SetStandardColorSpaceProfileA(PCSTR pMachineName,  DWORD dwProfileID, PCSTR  pProfilename);
BOOL       WINAPI SetStandardColorSpaceProfileW(PCWSTR pMachineName, DWORD dwProfileID, PCWSTR pProfileName);
BOOL       WINAPI GetStandardColorSpaceProfileA(PCSTR pMachineName, DWORD dwSCS, PSTR pBuffer, PDWORD pcbSize);
BOOL       WINAPI GetStandardColorSpaceProfileW(PCWSTR pMachineName, DWORD dwSCS, PWSTR pBuffer, PDWORD pcbSize);
BOOL       WINAPI AssociateColorProfileWithDeviceA(PCSTR pMachineName, PCSTR pProfileName, PCSTR pDeviceName);
BOOL       WINAPI AssociateColorProfileWithDeviceW(PCWSTR pMachineName, PCWSTR pProfileName, PCWSTR pDeviceName);
BOOL       WINAPI DisassociateColorProfileFromDeviceA(PCSTR pMachineName, PCSTR pProfileName, PCSTR pDeviceName);
BOOL       WINAPI DisassociateColorProfileFromDeviceW(PCWSTR pMachineName, PCWSTR pProfileName, PCWSTR pDeviceName);
BOOL       WINAPI SetupColorMatchingW(PCOLORMATCHSETUPW pcms);
BOOL       WINAPI SetupColorMatchingA(PCOLORMATCHSETUPA pcms);
#if NTDDI_VERSION >= NTDDI_VISTA
BOOL       WINAPI WcsAssociateColorProfileWithDevice(WCS_PROFILE_MANAGEMENT_SCOPE scope, PCWSTR pProfileName, PCWSTR pDeviceName);
BOOL       WINAPI WcsDisassociateColorProfileFromDevice(WCS_PROFILE_MANAGEMENT_SCOPE scope, PCWSTR pProfileName, PCWSTR pDeviceName);
BOOL       WINAPI WcsEnumColorProfilesSize(WCS_PROFILE_MANAGEMENT_SCOPE scope, PENUMTYPEW pEnumRecord, PDWORD pdwSize);
BOOL       WINAPI WcsEnumColorProfiles(WCS_PROFILE_MANAGEMENT_SCOPE scope, PENUMTYPEW pEnumRecord, PBYTE pBuffer, DWORD dwSize, PDWORD pnProfiles);
BOOL       WINAPI WcsGetDefaultColorProfileSize(WCS_PROFILE_MANAGEMENT_SCOPE scope, PCWSTR pDeviceName, COLORPROFILETYPE cptColorProfileType, COLORPROFILESUBTYPE cpstColorProfileSubType, DWORD dwProfileID, PDWORD pcbProfileName);
BOOL       WINAPI WcsGetDefaultColorProfile(WCS_PROFILE_MANAGEMENT_SCOPE scope, PCWSTR pDeviceName, COLORPROFILETYPE cptColorProfileType, COLORPROFILESUBTYPE cpstColorProfileSubType, DWORD dwProfileID, DWORD cbProfileName, LPWSTR pProfileName);
BOOL       WINAPI WcsSetDefaultColorProfile(WCS_PROFILE_MANAGEMENT_SCOPE scope, PCWSTR pDeviceName, COLORPROFILETYPE cptColorProfileType, COLORPROFILESUBTYPE cpstColorProfileSubType, DWORD dwProfileID, LPCWSTR pProfileName);
BOOL       WINAPI WcsSetDefaultRenderingIntent(WCS_PROFILE_MANAGEMENT_SCOPE scope, DWORD dwRenderingIntent);
BOOL       WINAPI WcsGetDefaultRenderingIntent(WCS_PROFILE_MANAGEMENT_SCOPE scope, PDWORD pdwRenderingIntent);
BOOL       WINAPI WcsGetUsePerUserProfiles(LPCWSTR pDeviceName, DWORD dwDeviceClass, PBOOL pUsePerUserProfiles);
BOOL       WINAPI WcsSetUsePerUserProfiles(LPCWSTR pDeviceName, DWORD dwDeviceClass, BOOL usePerUserProfiles);
BOOL       WINAPI WcsTranslateColors(HTRANSFORM hColorTransform, DWORD nColors, DWORD nInputChannels, COLORDATATYPE cdtInput, DWORD cbInput, PVOID pInputData, DWORD nOutputChannels, COLORDATATYPE cdtOutput, DWORD cbOutput, PVOID pOutputData);
BOOL       WINAPI WcsCheckColors(HTRANSFORM hColorTransform, DWORD nColors, DWORD nInputChannels, COLORDATATYPE cdtInput, DWORD cbInput, PVOID pInputData, PBYTE paResult);
#pragma deprecated (SetupColorMatchingA)
#pragma deprecated (SetupColorMatchingW)
#endif
#ifdef UNICODE
#define ENUMTYPE                            ENUMTYPEW
#define PENUMTYPE                           PENUMTYPEW
#define COLORMATCHSETUP                     COLORMATCHSETUPW
#define PCOLORMATCHSETUP                    PCOLORMATCHSETUPW
#define LPCOLORMATCHSETUP                   LPCOLORMATCHSETUPW
#define PCMSCALLBACK                        PCMSCALLBACKW
#define CreateColorTransform                CreateColorTransformW
#define OpenColorProfile                    OpenColorProfileW
#define CreateProfileFromLogColorSpace      CreateProfileFromLogColorSpaceW
#define RegisterCMM                         RegisterCMMW
#define UnregisterCMM                       UnregisterCMMW
#define GetColorDirectory                   GetColorDirectoryW
#define InstallColorProfile                 InstallColorProfileW
#define UninstallColorProfile               UninstallColorProfileW
#define AssociateColorProfileWithDevice     AssociateColorProfileWithDeviceW
#define DisassociateColorProfileFromDevice  DisassociateColorProfileFromDeviceW
#define EnumColorProfiles                   EnumColorProfilesW
#define SetStandardColorSpaceProfile        SetStandardColorSpaceProfileW
#define GetStandardColorSpaceProfile        GetStandardColorSpaceProfileW
#define SetupColorMatching                  SetupColorMatchingW
#if NTDDI_VERSION >= NTDDI_VISTA
#define WcsOpenColorProfile                 WcsOpenColorProfileW
#endif
#else
#define ENUMTYPE                            ENUMTYPEA
#define PENUMTYPE                           PENUMTYPEA
#define COLORMATCHSETUP                     COLORMATCHSETUPA
#define PCOLORMATCHSETUP                    PCOLORMATCHSETUPA
#define LPCOLORMATCHSETUP                   LPCOLORMATCHSETUPA
#define PCMSCALLBACK                        PCMSCALLBACKA
#define CreateColorTransform                CreateColorTransformA
#define OpenColorProfile                    OpenColorProfileA
#define CreateProfileFromLogColorSpace      CreateProfileFromLogColorSpaceA
#define RegisterCMM                         RegisterCMMA
#define UnregisterCMM                       UnregisterCMMA
#define GetColorDirectory                   GetColorDirectoryA
#define InstallColorProfile                 InstallColorProfileA
#define UninstallColorProfile               UninstallColorProfileA
#define AssociateColorProfileWithDevice     AssociateColorProfileWithDeviceA
#define DisassociateColorProfileFromDevice  DisassociateColorProfileFromDeviceA
#define EnumColorProfiles                   EnumColorProfilesA
#define SetStandardColorSpaceProfile        SetStandardColorSpaceProfileA
#define GetStandardColorSpaceProfile        GetStandardColorSpaceProfileA
#define SetupColorMatching                  SetupColorMatchingA
#if NTDDI_VERSION >= NTDDI_VISTA
#define WcsOpenColorProfile                 WcsOpenColorProfileA
#endif
#endif
typedef HANDLE  HCMTRANSFORM;
typedef PVOID   LPDEVCHARACTER;
BOOL WINAPI CMCheckColors(HCMTRANSFORM hcmTransform, LPCOLOR lpaInputColors, DWORD nColors, COLORTYPE ctInput, LPBYTE lpaResult);
BOOL WINAPI CMCheckRGBs(HCMTRANSFORM hcmTransform, LPVOID lpSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwStride, LPBYTE lpaResult, PBMCALLBACKFN pfnCallback, LPARAM ulCallbackData);
BOOL WINAPI CMConvertColorNameToIndex(HPROFILE hProfile, PCOLOR_NAME paColorName, PDWORD paIndex, DWORD dwCount);
BOOL WINAPI CMConvertIndexToColorName(HPROFILE hProfile, PDWORD paIndex, PCOLOR_NAME paColorName, DWORD dwCount);
BOOL WINAPI CMCreateDeviceLinkProfile(PHPROFILE pahProfiles, DWORD nProfiles, PDWORD padwIntents, DWORD nIntents, DWORD dwFlags, LPBYTE *lpProfileData);
HCMTRANSFORM WINAPI CMCreateMultiProfileTransform(PHPROFILE pahProfiles, DWORD nProfiles, PDWORD padwIntents, DWORD nIntents, DWORD dwFlags);
BOOL WINAPI CMCreateProfileW(LPLOGCOLORSPACEW lpColorSpace, LPDEVCHARACTER *lpProfileData);
HCMTRANSFORM WINAPI CMCreateTransform(LPLOGCOLORSPACEA lpColorSpace, LPDEVCHARACTER lpDevCharacter, LPDEVCHARACTER lpTargetDevCharacter);
HCMTRANSFORM WINAPI CMCreateTransformW(LPLOGCOLORSPACEW lpColorSpace, LPDEVCHARACTER lpDevCharacter, LPDEVCHARACTER lpTargetDevCharacter);
HCMTRANSFORM WINAPI CMCreateTransformExt(LPLOGCOLORSPACEA lpColorSpace, LPDEVCHARACTER lpDevCharacter, LPDEVCHARACTER lpTargetDevCharacter, DWORD dwFlags);
BOOL WINAPI CMCheckColorsInGamut(HCMTRANSFORM hcmTransform, RGBTRIPLE *lpaRGBTriple, LPBYTE lpaResult, UINT nCount);
BOOL WINAPI CMCreateProfile(LPLOGCOLORSPACEA lpColorSpace, LPDEVCHARACTER *lpProfileData);
BOOL WINAPI CMTranslateRGB(HCMTRANSFORM hcmTransform, COLORREF ColorRef, LPCOLORREF lpColorRef, DWORD dwFlags);
BOOL WINAPI CMTranslateRGBs(HCMTRANSFORM hcmTransform, LPVOID lpSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwStride, LPVOID lpDestBits, BMFORMAT bmOutput, DWORD dwTranslateDirection);
#if NTDDI_VERSION >= NTDDI_VISTA
#pragma deprecated (CMCreateTransform)
#pragma deprecated (CMCreateTransformW)
#pragma deprecated (CMCreateTransformExt)
#pragma deprecated (CMCheckColorsInGamut)
#pragma deprecated (CMCreateProfile)
#pragma deprecated (CMTranslateRGB)
#endif
#if NTDDI_VERSION > NTDDI_VISTA
#pragma deprecated (CMTranslateRGBs)
#endif
HCMTRANSFORM WINAPI CMCreateTransformExtW(LPLOGCOLORSPACEW lpColorSpace, LPDEVCHARACTER lpDevCharacter, LPDEVCHARACTER lpTargetDevCharacter, DWORD dwFlags);
BOOL WINAPI CMDeleteTransform(HCMTRANSFORM hcmTransform);
DWORD WINAPI CMGetInfo(DWORD dwInfo);
BOOL WINAPI CMGetNamedProfileInfo(HPROFILE hProfile, PNAMED_PROFILE_INFO pNamedProfileInfo);
BOOL WINAPI CMGetPS2ColorRenderingDictionary(HPROFILE hProfile, DWORD dwIntent, LPBYTE lpBuffer, LPDWORD lpcbSize, LPBOOL lpbBinary);
BOOL WINAPI CMGetPS2ColorRenderingIntent(HPROFILE hProfile, DWORD dwIntent, LPBYTE lpBuffer, LPDWORD lpcbSize);
BOOL WINAPI CMGetPS2ColorSpaceArray(HPROFILE hProfile, DWORD dwIntent, DWORD dwCSAType, LPBYTE lpBuffer, LPDWORD lpcbSize, LPBOOL lpbBinary);
BOOL WINAPI CMIsProfileValid(HPROFILE hProfile, LPBOOL lpbValid);
BOOL WINAPI CMTranslateColors(HCMTRANSFORM hcmTransform, LPCOLOR lpaInputColors, DWORD nColors, COLORTYPE ctInput, LPCOLOR lpaOutputColors, COLORTYPE ctOutput);
BOOL WINAPI CMTranslateRGBsExt(HCMTRANSFORM hcmTransform, LPVOID lpSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwInputStride, LPVOID lpDestBits, BMFORMAT bmOutput, DWORD dwOutputStride, LPBMCALLBACKFN lpfnCallback, LPARAM ulCallbackData);
#if NTDDI_VERSION >= NTDDI_VISTA
#define DONT_USE_EMBEDDED_WCS_PROFILES 0x00000001L
HPROFILE WINAPI WcsOpenColorProfileA(PPROFILE pCDMPProfile, PPROFILE pCAMPProfile, PPROFILE pGMMPProfile, DWORD dwDesireAccess, DWORD dwShareMode, DWORD dwCreationMode, DWORD dwFlags);
HPROFILE WINAPI WcsOpenColorProfileW(PPROFILE pCDMPProfile, PPROFILE pCAMPProfile, PPROFILE pGMMPProfile, DWORD dwDesireAccess, DWORD dwShareMode, DWORD dwCreationMode, DWORD dwFlags);
#define WCS_DEFAULT 0x00000000L
#define WCS_ICCONLY 0x00010000L
HPROFILE WINAPI WcsCreateIccProfile(HPROFILE hWcsProfile, DWORD dwOptions);
#define WCS_EMBEDDED_TAG_SIGNATURE 'MS00'
#define WCS_EMBEDDED_TAG_TYPE_SIGNATURE 'MS10'
#endif
#if NTDDI_VERSION >= NTDDI_WIN7
BOOL WcsGetCalibrationManagementState(BOOL *pbIsEnabled);
BOOL WcsSetCalibrationManagementState(BOOL bIsEnabled);
#endif
#endif

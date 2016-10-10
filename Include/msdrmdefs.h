/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdrmdefs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:29:14 2016
 \date		Modified on Sun Aug 14 19:29:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSDRMDEFS_H_
#define __MSDRMDEFS_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _INC_WINDOWS
#include <windows.h>
#include <wtypes.h>
#endif
typedef ULONG DRMHANDLE;
typedef ULONG DRMQUERYHANDLE;
typedef ULONG DRMENVHANDLE;
typedef ULONG DRMHSESSION;
typedef ULONG DRMPUBHANDLE;
#define DRMHANDLE_INVALID       0
#define DRMENVHANDLE_INVALID    0
#define DRMQUERYHANDLE_INVALID  0
#define DRMHSESSION_INVALID     0
#define DRMPUBHANDLE_INVALID    0
#define UDAPICALL __stdcall
#define DRMEXPORT __declspec(dllexport)
const UINT DRMIDVERSION = 0;
typedef struct _DRMID
{
    UINT  uVersion;
    PWSTR wszIDType;
    PWSTR wszID;

} DRMID;
typedef enum _DRMTIMETYPE
{
	DRMTIMETYPE_SYSTEMUTC,
	DRMTIMETYPE_SYSTEMLOCAL
} DRMTIMETYPE;
typedef enum _DRMENCODINGTYPE
{
	DRMENCODINGTYPE_BASE64,
	DRMENCODINGTYPE_STRING,
	DRMENCODINGTYPE_LONG,
	DRMENCODINGTYPE_TIME,
	DRMENCODINGTYPE_UINT,
	DRMENCODINGTYPE_RAW
} DRMENCODINGTYPE;
typedef enum _DRMATTESTTYPE
{
	DRMATTESTTYPE_FULLENVIRONMENT,
	DRMATTESTTYPE_HASHONLY
} DRMATTESTTYPE;
typedef enum _DRMSPECTYPE
{
	DRMSPECTYPE_UNKNOWN,
	DRMSPECTYPE_FILENAME
} DRMSPECTYPE;
typedef enum _DRMSECURITYPROVIDERTYPE
{
	DRMSECURITYPROVIDERTYPE_SOFTWARESECREP
} DRMSECURITYPROVIDERTYPE;
typedef enum _DRMGLOBALOPTIONS 
{
	DRMGLOBALOPTIONS_USE_WINHTTP,
	DRMGLOBALOPTIONS_USE_SERVERSECURITYPROCESSOR
} DRMGLOBALOPTIONS;
const UINT DRMBOUNDLICENSEPARAMSVERSION = 1;
typedef struct _DRMBOUNDLICENSEPARAMS
{    
    UINT        uVersion;
    DRMHANDLE   hEnablingPrincipal;
    DRMHANDLE   hSecureStore;
    PWSTR       wszRightsRequested;
    PWSTR       wszRightsGroup;
    DRMID       idResource;
    UINT        cAuthenticatorCount;
    DRMHANDLE*  rghAuthenticators;
    PWSTR       wszDefaultEnablingPrincipalCredentials;    
    DWORD       dwFlags;
} DRMBOUNDLICENSEPARAMS;
const DWORD DRMBINDINGFLAGS_IGNORE_VALIDITY_INTERVALS = 0x1;
const UINT DRMLICENSEACQDATAVERSION = 0;
typedef struct _DRM_LICENSE_ACQ_DATA
{    
    UINT    uVersion;
    PWSTR   wszURL;
    PWSTR   wszLocalFilename;
    BYTE*   pbPostData;
    DWORD   dwPostDataSize;
    PWSTR   wszFriendlyName;
} DRM_LICENSE_ACQ_DATA;
const UINT DRMACTSERVINFOVERSION = 0;
typedef struct _DRM_ACTSERV_INFO
{    
    UINT    uVersion;
    PWSTR   wszPubKey;
    PWSTR   wszURL;
} DRM_ACTSERV_INFO;
const UINT DRMCLIENTSTRUCTVERSION = 1;
typedef struct _DRM_CLIENT_VERSION_INFO {    
    UINT        uStructVersion;
    DWORD       dwVersion[4];
    WCHAR       wszHierarchy[256];
    WCHAR       wszProductId[256];
    WCHAR       wszProductDescription[256];
} DRM_CLIENT_VERSION_INFO;
typedef enum _DRM_STATUS_MSG
{
    DRM_MSG_ACTIVATE_MACHINE,
    DRM_MSG_ACTIVATE_GROUPIDENTITY,
    DRM_MSG_ACQUIRE_LICENSE,
    DRM_MSG_ACQUIRE_ADVISORY,
    DRM_MSG_SIGN_ISSUANCE_LICENSE,
    DRM_MSG_ACQUIRE_CLIENTLICENSOR,
    DRM_MSG_ACQUIRE_ISSUANCE_LICENSE_TEMPLATE
}DRM_STATUS_MSG;
typedef enum _DRM_USAGEPOLICY_TYPE
{
    DRM_USAGEPOLICY_TYPE_BYNAME,
    DRM_USAGEPOLICY_TYPE_BYPUBLICKEY,
    DRM_USAGEPOLICY_TYPE_BYDIGEST,
    DRM_USAGEPOLICY_TYPE_OSEXCLUSION
}DRM_USAGEPOLICY_TYPE;
#define DRM_AL_NONSILENT        0x01
#define DRM_AL_NOPERSIST        0x02
#define DRM_AL_CANCEL           0x04
#define DRM_AL_FETCHNOADVISORY  0x08
#define DRM_AL_NOUI             0x10
#define DRM_ACTIVATE_MACHINE                0x01
#define DRM_ACTIVATE_GROUPIDENTITY          0x02
#define DRM_ACTIVATE_TEMPORARY              0x04
#define DRM_ACTIVATE_CANCEL                 0x08
#define DRM_ACTIVATE_SILENT                 0x10
#define DRM_ACTIVATE_SHARED_GROUPIDENTITY   0x20
#define DRM_ACTIVATE_DELAYED                0x40
#define DRM_EL_MACHINE                      0x0001
#define DRM_EL_GROUPIDENTITY                0x0002
#define DRM_EL_GROUPIDENTITY_NAME           0x0004
#define DRM_EL_GROUPIDENTITY_LID            0x0008
#define DRM_EL_SPECIFIED_GROUPIDENTITY      0x0010
#define DRM_EL_EUL                          0x0020
#define DRM_EL_EUL_LID                      0x0040
#define DRM_EL_CLIENTLICENSOR               0x0080
#define DRM_EL_CLIENTLICENSOR_LID           0x0100
#define DRM_EL_SPECIFIED_CLIENTLICENSOR     0x0200
#define DRM_EL_REVOCATIONLIST               0x0400
#define DRM_EL_REVOCATIONLIST_LID           0x0800
#define DRM_EL_EXPIRED                      0x1000
#define DRM_EL_ISSUERNAME                   0x2000
#define DRM_EL_ISSUANCELICENSE_TEMPLATE     0x4000
#define DRM_EL_ISSUANCELICENSE_TEMPLATE_LID 0x8000
#define DRM_ADD_LICENSE_NOPERSIST           0x00
#define DRM_ADD_LICENSE_PERSIST             0x01
#define DRM_SERVICE_TYPE_ACTIVATION         0x01
#define DRM_SERVICE_TYPE_CERTIFICATION      0x02
#define DRM_SERVICE_TYPE_PUBLISHING         0x04
#define DRM_SERVICE_TYPE_CLIENTLICENSOR     0x08
#define DRM_SERVICE_TYPE_SILENT             0x10
#define DRM_SERVICE_LOCATION_INTERNET       0x01
#define DRM_SERVICE_LOCATION_ENTERPRISE     0x02
#define DRM_DEFAULTGROUPIDTYPE_WINDOWSAUTH L"WindowsAuthProvider"
#define DRM_DEFAULTGROUPIDTYPE_PASSPORT    L"PassportAuthProvider"
#define DRM_SIGN_ONLINE                0x01
#define DRM_SIGN_OFFLINE               0x02
#define DRM_SIGN_CANCEL                0x04
#define DRM_SERVER_ISSUANCELICENSE     0x08
#define DRM_AUTO_GENERATE_KEY          0x10
#define DRM_OWNER_LICENSE_NOPERSIST    0x20
#define DRM_REUSE_KEY                  0x40
#define DRM_LOCKBOXTYPE_NONE        0x00
#define DRM_LOCKBOXTYPE_WHITEBOX    0x01
#define DRM_LOCKBOXTYPE_BLACKBOX    0x02
#define DRM_LOCKBOXTYPE_DEFAULT     DRM_LOCKBOXTYPE_BLACKBOX
#define DRM_AILT_NONSILENT          0x01
#define DRM_AILT_OBTAIN_ALL         0x02
#define DRM_AILT_CANCEL             0x04
typedef enum _DRM_DISTRIBUTION_POINT_INFO
{
    DRM_DISTRIBUTION_POINT_LICENSE_ACQUISITION,
    DRM_DISTRIBUTION_POINT_PUBLISHING,
    DRM_DISTRIBUTION_POINT_REFERRAL_INFO
}DRM_DISTRIBUTION_POINT_INFO;
const UINT DRMCALLBACKVERSION = 1;
typedef HRESULT (__stdcall *DRMCALLBACK)(DRM_STATUS_MSG,HRESULT,void*,void*);
#endif

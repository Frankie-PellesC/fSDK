/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmdrmsdk.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 20 12:55:55 2016
 \date		Modified on Mon Jun 20 12:55:55 2016
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
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __wmdrmsdk_h__
#define __wmdrmsdk_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDRMStatusCallback_FWD_DEFINED__
#define __IDRMStatusCallback_FWD_DEFINED__
typedef interface IDRMStatusCallback IDRMStatusCallback;
#endif
#ifndef __IWMDRMEventGenerator_FWD_DEFINED__
#define __IWMDRMEventGenerator_FWD_DEFINED__
typedef interface IWMDRMEventGenerator IWMDRMEventGenerator;
#endif
#ifndef __IWMDRMProvider_FWD_DEFINED__
#define __IWMDRMProvider_FWD_DEFINED__
typedef interface IWMDRMProvider IWMDRMProvider;
#endif
#ifndef __IWMDRMSecurity_FWD_DEFINED__
#define __IWMDRMSecurity_FWD_DEFINED__
typedef interface IWMDRMSecurity IWMDRMSecurity;
#endif
#ifndef __IWMDRMEncrypt_FWD_DEFINED__
#define __IWMDRMEncrypt_FWD_DEFINED__
typedef interface IWMDRMEncrypt IWMDRMEncrypt;
#endif
#ifndef __IWMDRMEncryptScatter_FWD_DEFINED__
#define __IWMDRMEncryptScatter_FWD_DEFINED__
typedef interface IWMDRMEncryptScatter IWMDRMEncryptScatter;
#endif
#ifndef __IWMDRMDecrypt_FWD_DEFINED__
#define __IWMDRMDecrypt_FWD_DEFINED__
typedef interface IWMDRMDecrypt IWMDRMDecrypt;
#endif
#ifndef __IWMDRMLicense_FWD_DEFINED__
#define __IWMDRMLicense_FWD_DEFINED__
typedef interface IWMDRMLicense IWMDRMLicense;
#endif
#ifndef __IWMDRMLicenseQuery_FWD_DEFINED__
#define __IWMDRMLicenseQuery_FWD_DEFINED__
typedef interface IWMDRMLicenseQuery IWMDRMLicenseQuery;
#endif
#ifndef __IWMDRMLicenseManagement_FWD_DEFINED__
#define __IWMDRMLicenseManagement_FWD_DEFINED__
typedef interface IWMDRMLicenseManagement IWMDRMLicenseManagement;
#endif
#ifndef __IWMDRMNetReceiver_FWD_DEFINED__
#define __IWMDRMNetReceiver_FWD_DEFINED__
typedef interface IWMDRMNetReceiver IWMDRMNetReceiver;
#endif
#ifndef __IWMDRMNetReceiver2_FWD_DEFINED__
#define __IWMDRMNetReceiver2_FWD_DEFINED__
typedef interface IWMDRMNetReceiver2 IWMDRMNetReceiver2;
#endif
#ifndef __IWMDRMNetTransmitter_FWD_DEFINED__
#define __IWMDRMNetTransmitter_FWD_DEFINED__
typedef interface IWMDRMNetTransmitter IWMDRMNetTransmitter;
#endif
#ifndef __IWMDRMNetTransmitter2_FWD_DEFINED__
#define __IWMDRMNetTransmitter2_FWD_DEFINED__
typedef interface IWMDRMNetTransmitter2 IWMDRMNetTransmitter2;
#endif
#ifndef __IWMDRMIndividualizationStatus_FWD_DEFINED__
#define __IWMDRMIndividualizationStatus_FWD_DEFINED__
typedef interface IWMDRMIndividualizationStatus IWMDRMIndividualizationStatus;
#endif
#ifndef __IWMDRMLicenseBackupRestoreStatus_FWD_DEFINED__
#define __IWMDRMLicenseBackupRestoreStatus_FWD_DEFINED__
typedef interface IWMDRMLicenseBackupRestoreStatus IWMDRMLicenseBackupRestoreStatus;
#endif
#ifndef __IWMDRMNonSilentLicenseAquisition_FWD_DEFINED__
#define __IWMDRMNonSilentLicenseAquisition_FWD_DEFINED__
typedef interface IWMDRMNonSilentLicenseAquisition IWMDRMNonSilentLicenseAquisition;
#endif
#ifndef __WMDRMContentEnablerActivate_FWD_DEFINED__
#define __WMDRMContentEnablerActivate_FWD_DEFINED__
typedef struct WMDRMContentEnablerActivate WMDRMContentEnablerActivate;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <mfobjects.h>
#include <mfidl.h>
#ifdef INITGUI
extern const WCHAR *g_wszWMDRM_ACTIONLIST_TAG                   = L"ACTIONLIST";
extern const WCHAR *g_wszWMDRM_ACTION_TAG                       = L"ACTION";
extern const WCHAR *g_wszWMDRM_RIGHT_PLAYBACK                   = L"Play";
extern const WCHAR *g_wszWMDRM_RIGHT_COPY                       = L"Copy";
extern const WCHAR *g_wszWMDRM_RIGHT_PLAYLIST_BURN              = L"PlaylistBurn";
extern const WCHAR *g_wszWMDRM_RIGHT_CREATE_THUMBNAIL_IMAGE     = L"CreateThumbnailImage";
extern const WCHAR *g_wszWMDRM_RIGHT_COPY_TO_CD                 = L"Print.redbook";
extern const WCHAR *g_wszWMDRM_RIGHT_COPY_TO_SDMI_DEVICE        = L"Transfer.SDMI";
extern const WCHAR *g_wszWMDRM_RIGHT_COPY_TO_NON_SDMI_DEVICE    = L"Transfer.NONSDMI";
extern const WCHAR *g_wszWMDRM_RIGHT_BACKUP                     = L"Backup";
extern const WCHAR *g_wszWMDRM_RIGHT_COLLABORATIVE_PLAY         = L"CollaborativePlay";
extern const WCHAR *g_wszWMDRM_ActionAllowed                        = L"ActionAllowed.";
extern const WCHAR *g_wszWMDRM_ActionAllowed_Playback               = L"ActionAllowed.Play";
extern const WCHAR *g_wszWMDRM_ActionAllowed_Copy                   = L"ActionAllowed.Copy";
extern const WCHAR *g_wszWMDRM_ActionAllowed_PlaylistBurn           = L"ActionAllowed.PlaylistBurn";
extern const WCHAR *g_wszWMDRM_ActionAllowed_CreateThumbnailImage   = L"ActionAllowed.CreateThumbnailImage";
extern const WCHAR *g_wszWMDRM_ActionAllowed_CopyToCD               = L"ActionAllowed.Print.redbook";
extern const WCHAR *g_wszWMDRM_ActionAllowed_CopyToSDMIDevice       = L"ActionAllowed.Transfer.SDMI";
extern const WCHAR *g_wszWMDRM_ActionAllowed_CopyToNonSDMIDevice    = L"ActionAllowed.Transfer.NONSDMI";
extern const WCHAR *g_wszWMDRM_ActionAllowed_Backup                 = L"ActionAllowed.Backup";
extern const WCHAR *g_wszWMDRM_ActionAllowed_CollaborativePlay      = L"ActionAllowed.CollaborativePlay";
extern const WCHAR *g_wszWMDRM_LicenseState                      = L"LicenseStateData.";
extern const WCHAR *g_wszWMDRM_LicenseState_Playback             = L"LicenseStateData.Play";
extern const WCHAR *g_wszWMDRM_LicenseState_Copy                 = L"LicenseStateData.Copy";
extern const WCHAR *g_wszWMDRM_LicenseState_PlaylistBurn         = L"LicenseStateData.PlaylistBurn";
extern const WCHAR *g_wszWMDRM_LicenseState_CreateThumbnailImage = L"LicenseStateData.CreateThumbnailImage";
extern const WCHAR *g_wszWMDRM_LicenseState_CopyToCD             = L"LicenseStateData.Print.redbook";
extern const WCHAR *g_wszWMDRM_LicenseState_CopyToSDMIDevice     = L"LicenseStateData.Transfer.SDMI";
extern const WCHAR *g_wszWMDRM_LicenseState_CopyToNonSDMIDevice  = L"LicenseStateData.Transfer.NONSDMI";
extern const WCHAR *g_wszWMDRM_LicenseState_Backup               = L"LicenseStateData.Backup";
extern const WCHAR *g_wszWMDRM_LicenseState_CollaborativePlay    = L"LicenseStateData.CollaborativePlay";
extern const WCHAR *g_wszWMDRMNET_Revocation                     = L"WMDRMNET_REVOCATION";
extern const WCHAR *g_wszWMDRM_SAPLEVEL                          = L"SAPLEVEL";
extern const WCHAR *g_wszWMDRM_SAPRequired                       = L"SAPRequired";
extern const WCHAR *g_wszWMDRM_SOURCEID                          = L"SOURCEID";
extern const WCHAR *g_wszWMDRM_PRIORITY                          = L"PRIORITY";
extern const WCHAR *g_wszWMDRM_ISSUEDATE                         = L"ISSUEDATE";
extern const WCHAR *g_wszWMDRM_UplinkID                          = L"UplinkID";
extern const WCHAR *g_wszWMDRM_REVINFOVERSION                    = L"REVINFOVERSION";
#endif
#define DRM_LICENSE_STATE_DATA_VAGUE       1
#define DRM_LICENSE_STATE_DATA_OPL_PRESENT 2
#define DRM_LICENSE_STATE_DATA_SAP_PRESENT 4
#define WMDRM_BACKUP_OVERWRITE       ((DWORD) 0x00000001)
#define WMDRM_RESTORE_INDIVIDUALIZE  ((DWORD) 0x00000002)
#define WMDRM_SECURITY_PERFORM_INDIV               0x00000001L
#define WMDRM_SECURITY_PERFORM_REVOCATION_REFRESH  0x00000002L
#define WMDRM_SECURITY_PERFORM_FORCE_INDIV         0x00000004L
#define WMDRM_LICENSE_TYPE_XML       0x00000001L
#define WMDRM_LICENSE_TYPE_XMR       0x00000002L
#define WMDRM_CERTIFICATE_TYPE_V1       0x00000001L
#define WMDRM_CERTIFICATE_TYPE_V2       0x00000002L
#define WMDRM_ACQUIRE_LICENSE_SILENT              0x00000001L
#define WMDRM_ACQUIRE_LICENSE_NONSILENT           0x00000002L
#define WMDRM_ACQUIRE_LICENSE_LEGACY_NONSILENT    0x00000004L
#define WMDRM_DELETE_LICENSE_IMMEDIATELY    0x00000001L
#define WMDRM_DELETE_LICENSE_MARK_FOR_PURGE 0x00000002L
#define WMDRM_CLEAN_LICENSE_STORE_SYNC  0x00000001L
#define WMDRM_CLEAN_LICENSE_STORE_ASYNC 0x00000002L
#define WMDRM_CERTIFICATE_TYPE_XML 1
#define WMDRM_PROTECTION_TYPE_RC4        1
EXTERN_GUID( WMDRM_REVOCATIONTYPE_APP,          0x90A37313, 0x0ECF, 0x4CAA, 0xA9, 0x06, 0xB1, 0x88, 0xF6, 0x12, 0x93, 0x00 );
EXTERN_GUID( WMDRM_REVOCATIONTYPE_DEVICE,       0x3129E375, 0xCEB0, 0x47D5, 0x9C, 0xCA, 0x9D, 0xB7, 0x4C, 0xFD, 0x43, 0x32 );
EXTERN_GUID( WMDRM_REVOCATIONTYPE_CARDEA,       0xCD75E604, 0x543D, 0x4A9C, 0x9F, 0x09, 0xFE, 0x6D, 0x24, 0xE8, 0xBF, 0x90 );
EXTERN_GUID( WMDRM_REVOCATIONTYPE_REVINFO,      0xCCDE5A55, 0xA688, 0x4405, 0xA8, 0x8B, 0xD1, 0x3F, 0x90, 0xD5, 0xBA, 0x3E );
EXTERN_GUID( WMDRM_REVOCATIONTYPE_GRL,          0xa2190240, 0xb2ca, 0x40b3, 0xb4, 0x8d, 0x9b, 0xc4, 0xc2, 0xdc, 0x42, 0x8d );
EXTERN_GUID( WMDRM_REVOCATIONTYPE_HDCP,         0xe627553a, 0x820f, 0x40fd, 0xb4, 0x65, 0xa4, 0x28, 0x30, 0xa5, 0x74, 0xc9 );
typedef enum DRM_CRYPTO_TYPE
{
	CRYPTO_TYPE_MCE	= 0
} DRM_CRYPTO_TYPE;
#if !DRM_LICENSE_STATE_TYPES_DEFINED
#define DRM_LICENSE_STATE_TYPES_DEFINED 1
typedef enum DRM_LICENSE_STATE_CATEGORY
{
	WM_DRM_LICENSE_STATE_NORIGHT	= 0,
	WM_DRM_LICENSE_STATE_UNLIM	= ( WM_DRM_LICENSE_STATE_NORIGHT + 1 ) ,
	WM_DRM_LICENSE_STATE_COUNT	= ( WM_DRM_LICENSE_STATE_UNLIM + 1 ) ,
	WM_DRM_LICENSE_STATE_FROM	= ( WM_DRM_LICENSE_STATE_COUNT + 1 ) ,
	WM_DRM_LICENSE_STATE_UNTIL	= ( WM_DRM_LICENSE_STATE_FROM + 1 ) ,
	WM_DRM_LICENSE_STATE_FROM_UNTIL	= ( WM_DRM_LICENSE_STATE_UNTIL + 1 ) ,
	WM_DRM_LICENSE_STATE_COUNT_FROM	= ( WM_DRM_LICENSE_STATE_FROM_UNTIL + 1 ) ,
	WM_DRM_LICENSE_STATE_COUNT_UNTIL	= ( WM_DRM_LICENSE_STATE_COUNT_FROM + 1 ) ,
	WM_DRM_LICENSE_STATE_COUNT_FROM_UNTIL	= ( WM_DRM_LICENSE_STATE_COUNT_UNTIL + 1 ) ,
	WM_DRM_LICENSE_STATE_EXPIRATION_AFTER_FIRSTUSE	= ( WM_DRM_LICENSE_STATE_COUNT_FROM_UNTIL + 1 ) 
} DRM_LICENSE_STATE_CATEGORY;
typedef struct _DRM_LICENSE_STATE_DATA
{
    DWORD dwStreamId;
    DRM_LICENSE_STATE_CATEGORY dwCategory;
    DWORD dwNumCounts;
    DWORD dwCount[ 4 ];
    DWORD dwNumDates;
    FILETIME datetime[ 4 ];
    DWORD dwVague;
} DRM_LICENSE_STATE_DATA;
#endif
typedef enum MSDRM_STATUS
{
	DRM_ERROR	= 0,
	DRM_INFORMATION	= 1,
	DRM_BACKUPRESTORE_BEGIN	= 2,
	DRM_BACKUPRESTORE_END	= 3,
	DRM_BACKUPRESTORE_CONNECTING	= 4,
	DRM_BACKUPRESTORE_DISCONNECTING	= 5,
	DRM_ERROR_WITHURL	= 6,
	DRM_RESTRICTED_LICENSE	= 7,
	DRM_NEEDS_INDIVIDUALIZATION	= 8,
	DRM_PLAY_OPL_NOTIFICATION	= 9,
	DRM_COPY_OPL_NOTIFICATION	= 10,
	DRM_REFRESHCRL_COMPLETE	= 11
} MSDRM_STATUS;
typedef enum DRM_ATTR_DATATYPE
{
	DRM_TYPE_DWORD	= 0,
	DRM_TYPE_STRING	= 1,
	DRM_TYPE_BINARY	= 2,
	DRM_TYPE_BOOL	= 3,
	DRM_TYPE_QWORD	= 4,
	DRM_TYPE_WORD	= 5,
	DRM_TYPE_GUID	= 6
} DRM_ATTR_DATATYPE;
typedef enum DRM_HTTP_STATUS
{
	HTTP_NOTINITIATED	= 0,
	HTTP_CONNECTING	= ( HTTP_NOTINITIATED + 1 ) ,
	HTTP_REQUESTING	= ( HTTP_CONNECTING + 1 ) ,
	HTTP_RECEIVING	= ( HTTP_REQUESTING + 1 ) ,
	HTTP_COMPLETED	= ( HTTP_RECEIVING + 1 ) 
} DRM_HTTP_STATUS;
typedef enum DRM_INDIVIDUALIZATION_STATUS
{
	INDI_UNDEFINED	= 0,
	INDI_BEGIN	= 0x1,
	INDI_SUCCEED	= 0x2,
	INDI_FAIL	= 0x4,
	INDI_CANCEL	= 0x8,
	INDI_DOWNLOAD	= 0x10,
	INDI_INSTALL	= 0x20
} DRM_INDIVIDUALIZATION_STATUS;
typedef enum _DRM_ACTION_ALLOWED_QUERY_RESULTS
{
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED	= 0x1,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_NO_LICENSE	= 0x2,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_NO_RIGHT	= 0x4,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_EXHAUSTED	= 0x8,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_EXPIRED	= 0x10,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_NOT_STARTED	= 0x20,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_APPSEC_TOO_LOW	= 0x40,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_REQ_INDIV	= 0x80,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_COPY_OPL_TOO_LOW	= 0x100,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_COPY_OPL_EXCLUDED	= 0x200,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_NO_CLOCK_SUPPORT	= 0x400,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_NO_METERING_SUPPORT	= 0x800,
	DRM_ACTION_ALLOWED_QUERY_NOT_ENABLED_CHAIN_DEPTH_TOO_HIGH	= 0x1000
} DRM_ACTION_ALLOWED_QUERY_RESULTS;
typedef struct _WMDRMCryptoData
{
    DRM_CRYPTO_TYPE cryptoType;
    unsigned __int64 qwCounterID;
    unsigned __int64 qwOffset;
} WMDRMCryptoData;
typedef struct _WMIndividualizeStatus
{
    HRESULT hr;
    DRM_INDIVIDUALIZATION_STATUS enIndiStatus;
    LPSTR pszIndiRespUrl;
    DWORD dwHTTPRequest;
    DRM_HTTP_STATUS enHTTPStatus;
    DWORD dwHTTPReadProgress;
    DWORD dwHTTPReadTotal;
} WM_INDIVIDUALIZE_STATUS;
typedef struct _WMBackupRestoreData
{
    MSDRM_STATUS eStatus;
    BSTR bstrError;
} WM_BACKUP_RESTORE_STATUS;
#ifndef DRM_OPL_TYPES
#define DRM_OPL_TYPES 1
#define WMDRM_OPL_PLAY              ((DWORD) 0x00000001)
#define WMDRM_OPL_COPY              ((DWORD) 0x00000002)
typedef struct __tagDRM_MINIMUM_OUTPUT_PROTECTION_LEVELS
{
    WORD wCompressedDigitalVideo;
    WORD wUncompressedDigitalVideo;
    WORD wAnalogVideo;
    WORD wCompressedDigitalAudio;
    WORD wUncompressedDigitalAudio;
} DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS;
typedef struct __tagDRM_OPL_OUTPUT_IDS
{
    WORD cIds;
    GUID *rgIds;
} DRM_OPL_OUTPUT_IDS;
#define VER_DRM_PLAY_OPL_V1                 1
#define VER_DRM_PLAY_OPL                    2
#define VER_DRM_VIDEO_OUTPUT_PROTECTION     2
typedef struct __tagDRM_OUTPUT_PROTECTION
{
    GUID guidId;
    BYTE bConfigData;
} DRM_OUTPUT_PROTECTION;
typedef struct __tagDRM_OUTPUT_PROTECTION_EX
{
    DWORD dwVersion;
    GUID guidId;
    DWORD dwConfigData;
} DRM_OUTPUT_PROTECTION_EX;
typedef DRM_OUTPUT_PROTECTION DRM_AUDIO_OUTPUT_PROTECTION;
typedef DRM_OUTPUT_PROTECTION DRM_VIDEO_OUTPUT_PROTECTION;
typedef DRM_OUTPUT_PROTECTION_EX DRM_AUDIO_OUTPUT_PROTECTION_EX;
typedef DRM_OUTPUT_PROTECTION_EX DRM_VIDEO_OUTPUT_PROTECTION_EX;
typedef struct __tagDRM_VIDEO_OUTPUT_PROTECTION_IDS
{
    WORD cEntries;
    DRM_VIDEO_OUTPUT_PROTECTION *rgVop;
} DRM_VIDEO_OUTPUT_PROTECTION_IDS;
typedef struct __tagDRM_VIDEO_OUTPUT_PROTECTION_IDS_EX
{
    DWORD dwVersion;
    WORD cEntries;
    DRM_VIDEO_OUTPUT_PROTECTION_EX *rgVop;
} DRM_VIDEO_OUTPUT_PROTECTION_IDS_EX;
typedef struct __tagDRM_AUDIO_OUTPUT_PROTECTION_IDS
{
    WORD cEntries;
    DRM_AUDIO_OUTPUT_PROTECTION *rgAop;
} DRM_AUDIO_OUTPUT_PROTECTION_IDS;
typedef struct __tagDRM_AUDIO_OUTPUT_PROTECTION_IDS_EX
{
    DWORD dwVersion;
    WORD cEntries;
    DRM_AUDIO_OUTPUT_PROTECTION_EX *rgAop;
} DRM_AUDIO_OUTPUT_PROTECTION_IDS_EX;
typedef struct __tagDRM_PLAY_OPL
{
    DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS minOPL;
    DRM_OPL_OUTPUT_IDS oplIdReserved;
    DRM_VIDEO_OUTPUT_PROTECTION_IDS vopi;
} DRM_PLAY_OPL;
typedef struct __tagDRM_PLAY_OPL_EX
{
    DWORD dwVersion;
    DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS minOPL;
    DRM_OPL_OUTPUT_IDS oplIdReserved;
    DRM_VIDEO_OUTPUT_PROTECTION_IDS_EX vopi;
} DRM_PLAY_OPL_EX;
typedef struct __tagDRM_COPY_OPL
{
    WORD wMinimumCopyLevel;
    DRM_OPL_OUTPUT_IDS oplIdIncludes;
    DRM_OPL_OUTPUT_IDS oplIdExcludes;
} DRM_COPY_OPL;
#endif
typedef struct _WMDRMOutputProtectionLevels
{
    WORD wCompressedDigitalVideo;
    WORD wUncompressedDigitalVideo;
    WORD wAnalogVideo;
    WORD wCompressedDigitalAudio;
    WORD wUncompressedDigitalAudio;
    WORD wMinimumCopyProtectionLevel;
} WMDRM_OUTPUT_PROTECTION_LEVELS;
typedef struct _WMDRMAnalogVideoRestrictions
{
    GUID guidRestrictionID;
    DWORD dwRestrictionData;
} WMDRM_ANALOG_VIDEO_RESTRICTIONS;
typedef struct _WMDRMAnalogVideoRestrictionsEx
{
    DWORD dwVersion;
    GUID guidRestrictionID;
    DWORD cbRestrictionData;
    BYTE *pbRestrictionData;
} WMDRM_ANALOG_VIDEO_RESTRICTIONS_EX;
typedef enum _WMDRMNET_POLICY_TYPE
{
	WMDRMNET_POLICY_TYPE_UNDEFINED	= 0,
	WMDRMNET_POLICY_TYPE_TRANSCRYPTPLAY	= 0x1
} WMDRMNET_POLICY_TYPE;
typedef struct _tagWMDRMNET_POLICY
{
    WMDRMNET_POLICY_TYPE ePolicyType;
    BYTE *pbPolicy;
} WMDRMNET_POLICY;
typedef struct _WMDRMNET_POLICY_TRANSCRYPTPLAY
{
    DWORD cbData;
    BYTE *pbData;
} WMDRMNET_POLICY_TRANSCRYPTPLAY;
typedef struct _WMDRM_ENCRYPT_SCATTER_INFO
{
    DWORD dwStreamID;
    DWORD dwSampleProtectionVersion;
    DWORD cbProtectionInfo;
    BYTE *pbProtectionInfo;
} WMDRM_ENCRYPT_SCATTER_INFO;
typedef struct WMDRM_ENCRYPT_SCATTER_BLOCK
{
    DWORD dwStreamID;
    DWORD cbBlock;
    BYTE *pbBlock;
} WMDRM_ENCRYPT_SCATTER_BLOCK;
extern HRESULT STDMETHODCALLTYPE WMDRMStartup( );
extern HRESULT STDMETHODCALLTYPE WMDRMShutdown( );
extern HRESULT STDMETHODCALLTYPE WMDRMCreateProvider( IWMDRMProvider **ppDRMProvider );
extern HRESULT STDMETHODCALLTYPE WMDRMCreateProtectedProvider( IWMDRMProvider **ppDRMProvider );
extern RPC_IF_HANDLE __MIDL_itf_wmdrmsdk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdrmsdk_0000_0000_v0_0_s_ifspec;
#ifndef __IDRMStatusCallback_INTERFACE_DEFINED__
#define __IDRMStatusCallback_INTERFACE_DEFINED__ 
extern const IID IID_IDRMStatusCallback;
typedef struct IDRMStatusCallbackVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDRMStatusCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDRMStatusCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDRMStatusCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnStatus) (IDRMStatusCallback * This, MSDRM_STATUS Status, HRESULT hr, DRM_ATTR_DATATYPE dwType, BYTE * pValue, void *pvContext);
	END_INTERFACE
} IDRMStatusCallbackVtbl;
interface IDRMStatusCallback
{
    CONST_VTBL struct IDRMStatusCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDRMStatusCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDRMStatusCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDRMStatusCallback_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IDRMStatusCallback_OnStatus(This,Status,hr,dwType,pValue,pvContext)    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) ) 
#endif
#endif
#ifndef __IWMDRMEventGenerator_INTERFACE_DEFINED__
#define __IWMDRMEventGenerator_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMEventGenerator;
typedef struct IWMDRMEventGeneratorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMEventGenerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMEventGenerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMEventGenerator * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWMDRMEventGenerator * This, DWORD dwFlags, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * BeginGetEvent) (IWMDRMEventGenerator * This, IMFAsyncCallback * pCallback, IUnknown * punkState);
	HRESULT(STDMETHODCALLTYPE * EndGetEvent) (IWMDRMEventGenerator * This, IMFAsyncResult * pResult, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * QueueEvent) (IWMDRMEventGenerator * This, MediaEventType met, REFGUID guidExtendedType, HRESULT hrStatus, const PROPVARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncOperation) (IWMDRMEventGenerator * This, IUnknown * punkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMDRMEventGenerator * This);
	END_INTERFACE
} IWMDRMEventGeneratorVtbl;
interface IWMDRMEventGenerator
{
    CONST_VTBL struct IWMDRMEventGeneratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMEventGenerator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMEventGenerator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMEventGenerator_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMEventGenerator_GetEvent(This,dwFlags,ppEvent)    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) ) 
#define IWMDRMEventGenerator_BeginGetEvent(This,pCallback,punkState)    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) ) 
#define IWMDRMEventGenerator_EndGetEvent(This,pResult,ppEvent)    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) ) 
#define IWMDRMEventGenerator_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue)    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) ) 
#define IWMDRMEventGenerator_CancelAsyncOperation(This,punkCancelationCookie)    ( (This)->lpVtbl -> CancelAsyncOperation(This,punkCancelationCookie) ) 
#define IWMDRMEventGenerator_Shutdown(This)    ( (This)->lpVtbl -> Shutdown(This) ) 
#endif
#endif
#ifndef __IWMDRMProvider_INTERFACE_DEFINED__
#define __IWMDRMProvider_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMProvider;
typedef struct IWMDRMProviderVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMProvider * This);
	HRESULT(STDMETHODCALLTYPE * CreateObject) (IWMDRMProvider * This, REFIID riid, void **ppvObject);
	END_INTERFACE
} IWMDRMProviderVtbl;
interface IWMDRMProvider
{
    CONST_VTBL struct IWMDRMProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMProvider_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMProvider_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMProvider_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMProvider_CreateObject(This,riid,ppvObject)    ( (This)->lpVtbl -> CreateObject(This,riid,ppvObject) ) 
#endif
#endif
#ifndef __IWMDRMSecurity_INTERFACE_DEFINED__
#define __IWMDRMSecurity_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMSecurity;
typedef struct IWMDRMSecurityVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMSecurity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMSecurity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMSecurity * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWMDRMSecurity * This, DWORD dwFlags, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * BeginGetEvent) (IWMDRMSecurity * This, IMFAsyncCallback * pCallback, IUnknown * punkState);
	HRESULT(STDMETHODCALLTYPE * EndGetEvent) (IWMDRMSecurity * This, IMFAsyncResult * pResult, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * QueueEvent) (IWMDRMSecurity * This, MediaEventType met, REFGUID guidExtendedType, HRESULT hrStatus, const PROPVARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncOperation) (IWMDRMSecurity * This, IUnknown * punkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMDRMSecurity * This);
	HRESULT(STDMETHODCALLTYPE * GetSecurityVersion) (IWMDRMSecurity * This, BSTR * pbstrVersion);
	HRESULT(STDMETHODCALLTYPE * GetMachineCertificate) (IWMDRMSecurity * This, DWORD dwCertificateType, BYTE rgbVersion[4], BYTE ** ppbCertificate, DWORD * pcbCertificate);
	HRESULT(STDMETHODCALLTYPE * PerformSecurityUpdate) (IWMDRMSecurity * This, DWORD dwFlags, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * SetRevocationData) (IWMDRMSecurity * This, REFGUID guidRevocationType, BYTE * pbCRL, DWORD cbCRL);
	HRESULT(STDMETHODCALLTYPE * GetRevocationData) (IWMDRMSecurity * This, REFGUID guidRevocationType, BYTE * pbCRL, DWORD * pcbCRL);
	HRESULT(STDMETHODCALLTYPE * GetRevocationDataVersion) (IWMDRMSecurity * This, REFGUID guidRevocationType, ULONGLONG * pdwCRLVersion);
	HRESULT(STDMETHODCALLTYPE * CheckCertForRevocation) (IWMDRMSecurity * This, REFGUID rguidRevocationList, BYTE * pbCert, DWORD cbCert, BOOL * pfRevoked);
	HRESULT(STDMETHODCALLTYPE * GetContentEnablersForRevocations) (IWMDRMSecurity * This, BYTE ** rgpbCerts, DWORD * rgpdwCertSizes, GUID ** rgpguidCerts, DWORD cCerts, HRESULT hResultHint, IMFContentEnabler ** prgContentEnablers, DWORD * pcContentEnablers);
	HRESULT(STDMETHODCALLTYPE * GetContentEnablersFromHashes) (IWMDRMSecurity * This, BSTR * rgpbCertHashes, DWORD cCerts, HRESULT hResultHint, IMFContentEnabler ** prgContentEnablers, DWORD * pcContentEnablers);
	END_INTERFACE
} IWMDRMSecurityVtbl;
interface IWMDRMSecurity
{
    CONST_VTBL struct IWMDRMSecurityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMSecurity_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMSecurity_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMSecurity_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMSecurity_GetEvent(This,dwFlags,ppEvent)    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) ) 
#define IWMDRMSecurity_BeginGetEvent(This,pCallback,punkState)    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) ) 
#define IWMDRMSecurity_EndGetEvent(This,pResult,ppEvent)    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) ) 
#define IWMDRMSecurity_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue)    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) ) 
#define IWMDRMSecurity_CancelAsyncOperation(This,punkCancelationCookie)    ( (This)->lpVtbl -> CancelAsyncOperation(This,punkCancelationCookie) ) 
#define IWMDRMSecurity_Shutdown(This)    ( (This)->lpVtbl -> Shutdown(This) ) 
#define IWMDRMSecurity_GetSecurityVersion(This,pbstrVersion)    ( (This)->lpVtbl -> GetSecurityVersion(This,pbstrVersion) ) 
#define IWMDRMSecurity_GetMachineCertificate(This,dwCertificateType,rgbVersion,ppbCertificate,pcbCertificate)    ( (This)->lpVtbl -> GetMachineCertificate(This,dwCertificateType,rgbVersion,ppbCertificate,pcbCertificate) ) 
#define IWMDRMSecurity_PerformSecurityUpdate(This,dwFlags,ppunkCancelationCookie)    ( (This)->lpVtbl -> PerformSecurityUpdate(This,dwFlags,ppunkCancelationCookie) ) 
#define IWMDRMSecurity_SetRevocationData(This,guidRevocationType,pbCRL,cbCRL)    ( (This)->lpVtbl -> SetRevocationData(This,guidRevocationType,pbCRL,cbCRL) ) 
#define IWMDRMSecurity_GetRevocationData(This,guidRevocationType,pbCRL,pcbCRL)    ( (This)->lpVtbl -> GetRevocationData(This,guidRevocationType,pbCRL,pcbCRL) ) 
#define IWMDRMSecurity_GetRevocationDataVersion(This,guidRevocationType,pdwCRLVersion)    ( (This)->lpVtbl -> GetRevocationDataVersion(This,guidRevocationType,pdwCRLVersion) ) 
#define IWMDRMSecurity_CheckCertForRevocation(This,rguidRevocationList,pbCert,cbCert,pfRevoked)    ( (This)->lpVtbl -> CheckCertForRevocation(This,rguidRevocationList,pbCert,cbCert,pfRevoked) ) 
#define IWMDRMSecurity_GetContentEnablersForRevocations(This,rgpbCerts,rgpdwCertSizes,rgpguidCerts,cCerts,hResultHint,prgContentEnablers,pcContentEnablers)    ( (This)->lpVtbl -> GetContentEnablersForRevocations(This,rgpbCerts,rgpdwCertSizes,rgpguidCerts,cCerts,hResultHint,prgContentEnablers,pcContentEnablers) ) 
#define IWMDRMSecurity_GetContentEnablersFromHashes(This,rgpbCertHashes,cCerts,hResultHint,prgContentEnablers,pcContentEnablers)    ( (This)->lpVtbl -> GetContentEnablersFromHashes(This,rgpbCertHashes,cCerts,hResultHint,prgContentEnablers,pcContentEnablers) ) 
#endif
#endif
#ifndef __IWMDRMEncrypt_INTERFACE_DEFINED__
#define __IWMDRMEncrypt_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMEncrypt;
typedef struct IWMDRMEncryptVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMEncrypt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMEncrypt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMEncrypt * This);
	HRESULT(STDMETHODCALLTYPE * Encrypt) (IWMDRMEncrypt * This, BYTE * pbData, DWORD cbData, WMDRMCryptoData * pWMCryptoData);
	END_INTERFACE
} IWMDRMEncryptVtbl;
interface IWMDRMEncrypt
{
    CONST_VTBL struct IWMDRMEncryptVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMEncrypt_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMEncrypt_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMEncrypt_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMEncrypt_Encrypt(This,pbData,cbData,pWMCryptoData)    ( (This)->lpVtbl -> Encrypt(This,pbData,cbData,pWMCryptoData) ) 
#endif
#endif
#ifndef __IWMDRMEncryptScatter_INTERFACE_DEFINED__
#define __IWMDRMEncryptScatter_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMEncryptScatter;
typedef struct IWMDRMEncryptScatterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMEncryptScatter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMEncryptScatter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMEncryptScatter * This);
	HRESULT(STDMETHODCALLTYPE * InitEncryptScatter) (IWMDRMEncryptScatter * This, DWORD cStreams, WMDRM_ENCRYPT_SCATTER_INFO * rgInfos);
	HRESULT(STDMETHODCALLTYPE * EncryptScatter) (IWMDRMEncryptScatter * This, DWORD cBlocks, WMDRM_ENCRYPT_SCATTER_BLOCK * rgBlocks, WMDRMCryptoData * pWMCryptoData, DWORD cbOutput, BYTE * pbOutput);
	END_INTERFACE
} IWMDRMEncryptScatterVtbl;
interface IWMDRMEncryptScatter
{
    CONST_VTBL struct IWMDRMEncryptScatterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMEncryptScatter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMEncryptScatter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMEncryptScatter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMEncryptScatter_InitEncryptScatter(This,cStreams,rgInfos)    ( (This)->lpVtbl -> InitEncryptScatter(This,cStreams,rgInfos) ) 
#define IWMDRMEncryptScatter_EncryptScatter(This,cBlocks,rgBlocks,pWMCryptoData,cbOutput,pbOutput)    ( (This)->lpVtbl -> EncryptScatter(This,cBlocks,rgBlocks,pWMCryptoData,cbOutput,pbOutput) ) 
#endif
#endif
#ifndef __IWMDRMDecrypt_INTERFACE_DEFINED__
#define __IWMDRMDecrypt_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMDecrypt;
typedef struct IWMDRMDecryptVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMDecrypt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMDecrypt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMDecrypt * This);
	HRESULT(STDMETHODCALLTYPE * Decrypt) (IWMDRMDecrypt * This, BYTE * pbData, DWORD cbData, WMDRMCryptoData * pWMCryptoData);
	END_INTERFACE
} IWMDRMDecryptVtbl;
interface IWMDRMDecrypt
{
    CONST_VTBL struct IWMDRMDecryptVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMDecrypt_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMDecrypt_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMDecrypt_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMDecrypt_Decrypt(This,pbData,cbData,pWMCryptoData)    ( (This)->lpVtbl -> Decrypt(This,pbData,cbData,pWMCryptoData) ) 
#endif
#endif
#ifndef __IWMDRMLicense_INTERFACE_DEFINED__
#define __IWMDRMLicense_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMLicense;
typedef struct IWMDRMLicenseVtbl
{
    BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMLicense * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMLicense * This);
ULONG(STDMETHODCALLTYPE * Release) (IWMDRMLicense * This);
HRESULT(STDMETHODCALLTYPE * ResetEnumeration) (IWMDRMLicense * This);
HRESULT(STDMETHODCALLTYPE * GetNext) (IWMDRMLicense * This);
HRESULT(STDMETHODCALLTYPE * GetLicense) (IWMDRMLicense * This, BYTE ** ppbLicense, DWORD * pcbLicense, DWORD * pdwLicenseType);
HRESULT(STDMETHODCALLTYPE * GetLicenseProperty) (IWMDRMLicense * This, BSTR bstrName, PROPVARIANT * ppropVariant);
HRESULT(STDMETHODCALLTYPE * CreateDecryptor) (IWMDRMLicense * This, IWMDRMDecrypt ** ppDecryptor);
HRESULT(STDMETHODCALLTYPE * CreateSecureDecryptor) (IWMDRMLicense * This, BYTE * pbCertificate, DWORD cbCertificate, DWORD dwCertificateType, DWORD dwFlags, BYTE * pbInitializationVector, DWORD * pcbInitializationVector, IWMDRMDecrypt ** ppDecryptor);
HRESULT(STDMETHODCALLTYPE * CreateEncryptor) (IWMDRMLicense * This, IWMDRMEncrypt ** ppEncryptor);
HRESULT(STDMETHODCALLTYPE * PersistLicense) (IWMDRMLicense * This);
HRESULT(STDMETHODCALLTYPE * CanPersist) (IWMDRMLicense * This, BOOL * pfCanPersist);
HRESULT(STDMETHODCALLTYPE * GetAnalogVideoRestrictionLevels) (IWMDRMLicense * This, WMDRM_ANALOG_VIDEO_RESTRICTIONS rgAnalogVideoRestrictions[], DWORD * pcRestrictions);
HRESULT(STDMETHODCALLTYPE * GetOutputProtectionLevels) (IWMDRMLicense * This, WMDRM_OUTPUT_PROTECTION_LEVELS * pOPLs);
HRESULT(STDMETHODCALLTYPE * GetInclusionList) (IWMDRMLicense * This, GUID ** ppGuids, DWORD * pcGuids);
HRESULT(STDMETHODCALLTYPE * GetPolicy) (IWMDRMLicense * This, BYTE ** ppbPolicy, DWORD * pcbPolicy);
END_INTERFACE
} IWMDRMLicenseVtbl;
interface IWMDRMLicense
{
    CONST_VTBL struct IWMDRMLicenseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMLicense_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMLicense_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMLicense_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMLicense_ResetEnumeration(This)    ( (This)->lpVtbl -> ResetEnumeration(This) ) 
#define IWMDRMLicense_GetNext(This)    ( (This)->lpVtbl -> GetNext(This) ) 
#define IWMDRMLicense_GetLicense(This,ppbLicense,pcbLicense,pdwLicenseType)    ( (This)->lpVtbl -> GetLicense(This,ppbLicense,pcbLicense,pdwLicenseType) ) 
#define IWMDRMLicense_GetLicenseProperty(This,bstrName,ppropVariant)    ( (This)->lpVtbl -> GetLicenseProperty(This,bstrName,ppropVariant) ) 
#define IWMDRMLicense_CreateDecryptor(This,ppDecryptor)    ( (This)->lpVtbl -> CreateDecryptor(This,ppDecryptor) ) 
#define IWMDRMLicense_CreateSecureDecryptor(This,pbCertificate,cbCertificate,dwCertificateType,dwFlags,pbInitializationVector,pcbInitializationVector,ppDecryptor)    ( (This)->lpVtbl -> CreateSecureDecryptor(This,pbCertificate,cbCertificate,dwCertificateType,dwFlags,pbInitializationVector,pcbInitializationVector,ppDecryptor) ) 
#define IWMDRMLicense_CreateEncryptor(This,ppEncryptor)    ( (This)->lpVtbl -> CreateEncryptor(This,ppEncryptor) ) 
#define IWMDRMLicense_PersistLicense(This)    ( (This)->lpVtbl -> PersistLicense(This) ) 
#define IWMDRMLicense_CanPersist(This,pfCanPersist)    ( (This)->lpVtbl -> CanPersist(This,pfCanPersist) ) 
#define IWMDRMLicense_GetAnalogVideoRestrictionLevels(This,rgAnalogVideoRestrictions,pcRestrictions)    ( (This)->lpVtbl -> GetAnalogVideoRestrictionLevels(This,rgAnalogVideoRestrictions,pcRestrictions) ) 
#define IWMDRMLicense_GetOutputProtectionLevels(This,pOPLs)    ( (This)->lpVtbl -> GetOutputProtectionLevels(This,pOPLs) ) 
#define IWMDRMLicense_GetInclusionList(This,ppGuids,pcGuids)    ( (This)->lpVtbl -> GetInclusionList(This,ppGuids,pcGuids) ) 
#define IWMDRMLicense_GetPolicy(This,ppbPolicy,pcbPolicy)    ( (This)->lpVtbl -> GetPolicy(This,ppbPolicy,pcbPolicy) ) 
#endif
#endif
#ifndef __IWMDRMLicenseQuery_INTERFACE_DEFINED__
#define __IWMDRMLicenseQuery_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMLicenseQuery;
typedef struct IWMDRMLicenseQueryVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMLicenseQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMLicenseQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMLicenseQuery * This);
	HRESULT(STDMETHODCALLTYPE * QueryLicenseState) (IWMDRMLicenseQuery * This, BSTR bstrKID, DWORD cActionsToQuery, BSTR rgbstrActionsToQuery[], DRM_LICENSE_STATE_DATA rgResultStateData[]);
	HRESULT(STDMETHODCALLTYPE * SetActionAllowedQueryParams) (IWMDRMLicenseQuery * This, BOOL fIsMF, DWORD dwAppSecLevel, BOOL fHasSerialNumber, BSTR bstrDeviceCert);
	HRESULT(STDMETHODCALLTYPE * QueryActionAllowed) (IWMDRMLicenseQuery * This, BSTR bstrKID, BSTR bstrMinReqIndivVersion, DWORD cActionsToQuery, BSTR rgbstrActionsToQuery[], DWORD rgdwQueryResult[]);
	END_INTERFACE
} IWMDRMLicenseQueryVtbl;
interface IWMDRMLicenseQuery
{
    CONST_VTBL struct IWMDRMLicenseQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMLicenseQuery_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMLicenseQuery_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMLicenseQuery_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMLicenseQuery_QueryLicenseState(This,bstrKID,cActionsToQuery,rgbstrActionsToQuery,rgResultStateData)    ( (This)->lpVtbl -> QueryLicenseState(This,bstrKID,cActionsToQuery,rgbstrActionsToQuery,rgResultStateData) ) 
#define IWMDRMLicenseQuery_SetActionAllowedQueryParams(This,fIsMF,dwAppSecLevel,fHasSerialNumber,bstrDeviceCert)    ( (This)->lpVtbl -> SetActionAllowedQueryParams(This,fIsMF,dwAppSecLevel,fHasSerialNumber,bstrDeviceCert) ) 
#define IWMDRMLicenseQuery_QueryActionAllowed(This,bstrKID,bstrMinReqIndivVersion,cActionsToQuery,rgbstrActionsToQuery,rgdwQueryResult)    ( (This)->lpVtbl -> QueryActionAllowed(This,bstrKID,bstrMinReqIndivVersion,cActionsToQuery,rgbstrActionsToQuery,rgdwQueryResult) ) 
#endif
#endif 
typedef struct WMDRM_LICENSE_FILTER
{
    DWORD dwVersion;
    BSTR bstrKID;
    BSTR bstrRights;
    BSTR bstrAllowedSourceIDs;
} WMDRM_LICENSE_FILTER;
extern RPC_IF_HANDLE __MIDL_itf_wmdrmsdk_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdrmsdk_0000_0009_v0_0_s_ifspec;
#ifndef __IWMDRMLicenseManagement_INTERFACE_DEFINED__
#define __IWMDRMLicenseManagement_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMLicenseManagement;
typedef struct IWMDRMLicenseManagementVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMLicenseManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMLicenseManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMLicenseManagement * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWMDRMLicenseManagement * This, DWORD dwFlags, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * BeginGetEvent) (IWMDRMLicenseManagement * This, IMFAsyncCallback * pCallback, IUnknown * punkState);
	HRESULT(STDMETHODCALLTYPE * EndGetEvent) (IWMDRMLicenseManagement * This, IMFAsyncResult * pResult, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * QueueEvent) (IWMDRMLicenseManagement * This, MediaEventType met, REFGUID guidExtendedType, HRESULT hrStatus, const PROPVARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncOperation) (IWMDRMLicenseManagement * This, IUnknown * punkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMDRMLicenseManagement * This);
	HRESULT(STDMETHODCALLTYPE * CreateLicenseEnumeration) (IWMDRMLicenseManagement * This, WMDRM_LICENSE_FILTER * pLicenseFilter, IWMDRMLicense ** pEnumerator);
	HRESULT(STDMETHODCALLTYPE * DeleteLicense) (IWMDRMLicenseManagement * This, BSTR bstrKID, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CleanLicenseStore) (IWMDRMLicenseManagement * This, DWORD dwFlags, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * StoreLicense) (IWMDRMLicenseManagement * This, BSTR bstrLicenseResponse);
	HRESULT(STDMETHODCALLTYPE * AcquireLicense) (IWMDRMLicenseManagement * This, BSTR bstrURL, BSTR bstrHeaderData, BSTR bstrActions, DWORD dwFlags, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * MonitorLicenseAcquisition) (IWMDRMLicenseManagement * This, BSTR bstrKID, BSTR bstrHeader, BSTR bstrActions, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * BackupLicenses) (IWMDRMLicenseManagement * This, BSTR bstrBackupDirectory, DWORD dwFlags, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * RestoreLicenses) (IWMDRMLicenseManagement * This, BSTR bstrBackupDirectory, DWORD dwFlags, IUnknown ** ppunkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * CreateLicenseRevocationChallenge) (IWMDRMLicenseManagement * This, BYTE * pbMachineID, DWORD cbMachineID, BYTE * pbChallenge, DWORD cbChallenge, BYTE ** ppbChallengeOutput, DWORD * pcbChallengeOutput);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseRevocationResponse) (IWMDRMLicenseManagement * This, BYTE * pbSignedLRB, DWORD cbSignedLRB, BYTE ** ppbSignedACK, DWORD * pcbSignedACK);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseDeletionMessage) (IWMDRMLicenseManagement * This, BSTR bstrDeletionMessage);
	END_INTERFACE
} IWMDRMLicenseManagementVtbl;
interface IWMDRMLicenseManagement
{
    CONST_VTBL struct IWMDRMLicenseManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMLicenseManagement_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMLicenseManagement_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMLicenseManagement_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMLicenseManagement_GetEvent(This,dwFlags,ppEvent)    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) ) 
#define IWMDRMLicenseManagement_BeginGetEvent(This,pCallback,punkState)    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) ) 
#define IWMDRMLicenseManagement_EndGetEvent(This,pResult,ppEvent)    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) ) 
#define IWMDRMLicenseManagement_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue)    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) ) 
#define IWMDRMLicenseManagement_CancelAsyncOperation(This,punkCancelationCookie)    ( (This)->lpVtbl -> CancelAsyncOperation(This,punkCancelationCookie) ) 
#define IWMDRMLicenseManagement_Shutdown(This)    ( (This)->lpVtbl -> Shutdown(This) ) 
#define IWMDRMLicenseManagement_CreateLicenseEnumeration(This,pLicenseFilter,pEnumerator)    ( (This)->lpVtbl -> CreateLicenseEnumeration(This,pLicenseFilter,pEnumerator) ) 
#define IWMDRMLicenseManagement_DeleteLicense(This,bstrKID,dwFlags)    ( (This)->lpVtbl -> DeleteLicense(This,bstrKID,dwFlags) ) 
#define IWMDRMLicenseManagement_CleanLicenseStore(This,dwFlags,ppunkCancelationCookie)    ( (This)->lpVtbl -> CleanLicenseStore(This,dwFlags,ppunkCancelationCookie) ) 
#define IWMDRMLicenseManagement_StoreLicense(This,bstrLicenseResponse)    ( (This)->lpVtbl -> StoreLicense(This,bstrLicenseResponse) ) 
#define IWMDRMLicenseManagement_AcquireLicense(This,bstrURL,bstrHeaderData,bstrActions,dwFlags,ppunkCancelationCookie)    ( (This)->lpVtbl -> AcquireLicense(This,bstrURL,bstrHeaderData,bstrActions,dwFlags,ppunkCancelationCookie) ) 
#define IWMDRMLicenseManagement_MonitorLicenseAcquisition(This,bstrKID,bstrHeader,bstrActions,ppunkCancelationCookie)    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This,bstrKID,bstrHeader,bstrActions,ppunkCancelationCookie) ) 
#define IWMDRMLicenseManagement_BackupLicenses(This,bstrBackupDirectory,dwFlags,ppunkCancelationCookie)    ( (This)->lpVtbl -> BackupLicenses(This,bstrBackupDirectory,dwFlags,ppunkCancelationCookie) ) 
#define IWMDRMLicenseManagement_RestoreLicenses(This,bstrBackupDirectory,dwFlags,ppunkCancelationCookie)    ( (This)->lpVtbl -> RestoreLicenses(This,bstrBackupDirectory,dwFlags,ppunkCancelationCookie) ) 
#define IWMDRMLicenseManagement_CreateLicenseRevocationChallenge(This,pbMachineID,cbMachineID,pbChallenge,cbChallenge,ppbChallengeOutput,pcbChallengeOutput)    ( (This)->lpVtbl -> CreateLicenseRevocationChallenge(This,pbMachineID,cbMachineID,pbChallenge,cbChallenge,ppbChallengeOutput,pcbChallengeOutput) ) 
#define IWMDRMLicenseManagement_ProcessLicenseRevocationResponse(This,pbSignedLRB,cbSignedLRB,ppbSignedACK,pcbSignedACK)    ( (This)->lpVtbl -> ProcessLicenseRevocationResponse(This,pbSignedLRB,cbSignedLRB,ppbSignedACK,pcbSignedACK) ) 
#define IWMDRMLicenseManagement_ProcessLicenseDeletionMessage(This,bstrDeletionMessage)    ( (This)->lpVtbl -> ProcessLicenseDeletionMessage(This,bstrDeletionMessage) ) 
#endif
#endif
#ifndef __IWMDRMNetReceiver_INTERFACE_DEFINED__
#define __IWMDRMNetReceiver_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMNetReceiver;
typedef struct IWMDRMNetReceiverVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMNetReceiver * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMNetReceiver * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMNetReceiver * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWMDRMNetReceiver * This, DWORD dwFlags, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * BeginGetEvent) (IWMDRMNetReceiver * This, IMFAsyncCallback * pCallback, IUnknown * punkState);
	HRESULT(STDMETHODCALLTYPE * EndGetEvent) (IWMDRMNetReceiver * This, IMFAsyncResult * pResult, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * QueueEvent) (IWMDRMNetReceiver * This, MediaEventType met, REFGUID guidExtendedType, HRESULT hrStatus, const PROPVARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncOperation) (IWMDRMNetReceiver * This, IUnknown * punkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMDRMNetReceiver * This);
	HRESULT(STDMETHODCALLTYPE * GetRegistrationChallenge) (IWMDRMNetReceiver * This, BYTE ** ppbRegistrationChallenge, DWORD * pcbRegistrationChallenge);
	HRESULT(STDMETHODCALLTYPE * ProcessRegistrationResponse) (IWMDRMNetReceiver * This, BYTE * pbRegistrationResponse, DWORD cbRegistrationResponse, IUnknown ** ppunkCancellationCookie);
	HRESULT(STDMETHODCALLTYPE * GetLicenseChallenge) (IWMDRMNetReceiver * This, BSTR bstrAction, BYTE ** ppbLicenseChallenge, DWORD * pcbLicenseChallenge);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseResponse) (IWMDRMNetReceiver * This, BYTE * pbLicenseResponse, DWORD cbLicenseResponse, BYTE ** ppbWMDRMNetLicenseRepresentation, DWORD * pcbWMDRMNetLicenseRepresentation);
	END_INTERFACE
} IWMDRMNetReceiverVtbl;
interface IWMDRMNetReceiver
{
    CONST_VTBL struct IWMDRMNetReceiverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMNetReceiver_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMNetReceiver_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMNetReceiver_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMNetReceiver_GetEvent(This,dwFlags,ppEvent)    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) ) 
#define IWMDRMNetReceiver_BeginGetEvent(This,pCallback,punkState)    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) ) 
#define IWMDRMNetReceiver_EndGetEvent(This,pResult,ppEvent)    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) ) 
#define IWMDRMNetReceiver_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue)    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) ) 
#define IWMDRMNetReceiver_CancelAsyncOperation(This,punkCancelationCookie)    ( (This)->lpVtbl -> CancelAsyncOperation(This,punkCancelationCookie) ) 
#define IWMDRMNetReceiver_Shutdown(This)    ( (This)->lpVtbl -> Shutdown(This) ) 
#define IWMDRMNetReceiver_GetRegistrationChallenge(This,ppbRegistrationChallenge,pcbRegistrationChallenge)    ( (This)->lpVtbl -> GetRegistrationChallenge(This,ppbRegistrationChallenge,pcbRegistrationChallenge) ) 
#define IWMDRMNetReceiver_ProcessRegistrationResponse(This,pbRegistrationResponse,cbRegistrationResponse,ppunkCancellationCookie)    ( (This)->lpVtbl -> ProcessRegistrationResponse(This,pbRegistrationResponse,cbRegistrationResponse,ppunkCancellationCookie) ) 
#define IWMDRMNetReceiver_GetLicenseChallenge(This,bstrAction,ppbLicenseChallenge,pcbLicenseChallenge)    ( (This)->lpVtbl -> GetLicenseChallenge(This,bstrAction,ppbLicenseChallenge,pcbLicenseChallenge) ) 
#define IWMDRMNetReceiver_ProcessLicenseResponse(This,pbLicenseResponse,cbLicenseResponse,ppbWMDRMNetLicenseRepresentation,pcbWMDRMNetLicenseRepresentation)    ( (This)->lpVtbl -> ProcessLicenseResponse(This,pbLicenseResponse,cbLicenseResponse,ppbWMDRMNetLicenseRepresentation,pcbWMDRMNetLicenseRepresentation) ) 
#endif
#endif
#ifndef __IWMDRMNetReceiver2_INTERFACE_DEFINED__
#define __IWMDRMNetReceiver2_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMNetReceiver2;
typedef struct IWMDRMNetReceiver2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMNetReceiver2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMNetReceiver2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMNetReceiver2 * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWMDRMNetReceiver2 * This, DWORD dwFlags, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * BeginGetEvent) (IWMDRMNetReceiver2 * This, IMFAsyncCallback * pCallback, IUnknown * punkState);
	HRESULT(STDMETHODCALLTYPE * EndGetEvent) (IWMDRMNetReceiver2 * This, IMFAsyncResult * pResult, IMFMediaEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * QueueEvent) (IWMDRMNetReceiver2 * This, MediaEventType met, REFGUID guidExtendedType, HRESULT hrStatus, const PROPVARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncOperation) (IWMDRMNetReceiver2 * This, IUnknown * punkCancelationCookie);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMDRMNetReceiver2 * This);
	HRESULT(STDMETHODCALLTYPE * GetRegistrationChallenge) (IWMDRMNetReceiver2 * This, BYTE ** ppbRegistrationChallenge, DWORD * pcbRegistrationChallenge);
	HRESULT(STDMETHODCALLTYPE * ProcessRegistrationResponse) (IWMDRMNetReceiver2 * This, BYTE * pbRegistrationResponse, DWORD cbRegistrationResponse, IUnknown ** ppunkCancellationCookie);
	HRESULT(STDMETHODCALLTYPE * GetLicenseChallenge) (IWMDRMNetReceiver2 * This, BSTR bstrAction, BYTE ** ppbLicenseChallenge, DWORD * pcbLicenseChallenge);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseResponse) (IWMDRMNetReceiver2 * This, BYTE * pbLicenseResponse, DWORD cbLicenseResponse, BYTE ** ppbWMDRMNetLicenseRepresentation, DWORD * pcbWMDRMNetLicenseRepresentation);
	HRESULT(STDMETHODCALLTYPE * ProcessRegistrationResponseEx) (IWMDRMNetReceiver2 * This, BYTE * pbRegistrationResponse, DWORD cbRegistrationResponse, DWORD dwLocalIPv6ScopeID, IUnknown ** ppunkCancellationCookie);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseUpdate) (IWMDRMNetReceiver2 * This, BYTE * pbLicenseUpdate, DWORD cbLicenseUpdate, IWMDRMLicense ** ppLicense);
	END_INTERFACE
} IWMDRMNetReceiver2Vtbl;
interface IWMDRMNetReceiver2
{
    CONST_VTBL struct IWMDRMNetReceiver2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMNetReceiver2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMNetReceiver2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMNetReceiver2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMNetReceiver2_GetEvent(This,dwFlags,ppEvent)    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) ) 
#define IWMDRMNetReceiver2_BeginGetEvent(This,pCallback,punkState)    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) ) 
#define IWMDRMNetReceiver2_EndGetEvent(This,pResult,ppEvent)    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) ) 
#define IWMDRMNetReceiver2_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue)    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) ) 
#define IWMDRMNetReceiver2_CancelAsyncOperation(This,punkCancelationCookie)    ( (This)->lpVtbl -> CancelAsyncOperation(This,punkCancelationCookie) ) 
#define IWMDRMNetReceiver2_Shutdown(This)    ( (This)->lpVtbl -> Shutdown(This) ) 
#define IWMDRMNetReceiver2_GetRegistrationChallenge(This,ppbRegistrationChallenge,pcbRegistrationChallenge)    ( (This)->lpVtbl -> GetRegistrationChallenge(This,ppbRegistrationChallenge,pcbRegistrationChallenge) ) 
#define IWMDRMNetReceiver2_ProcessRegistrationResponse(This,pbRegistrationResponse,cbRegistrationResponse,ppunkCancellationCookie)    ( (This)->lpVtbl -> ProcessRegistrationResponse(This,pbRegistrationResponse,cbRegistrationResponse,ppunkCancellationCookie) ) 
#define IWMDRMNetReceiver2_GetLicenseChallenge(This,bstrAction,ppbLicenseChallenge,pcbLicenseChallenge)    ( (This)->lpVtbl -> GetLicenseChallenge(This,bstrAction,ppbLicenseChallenge,pcbLicenseChallenge) ) 
#define IWMDRMNetReceiver2_ProcessLicenseResponse(This,pbLicenseResponse,cbLicenseResponse,ppbWMDRMNetLicenseRepresentation,pcbWMDRMNetLicenseRepresentation)    ( (This)->lpVtbl -> ProcessLicenseResponse(This,pbLicenseResponse,cbLicenseResponse,ppbWMDRMNetLicenseRepresentation,pcbWMDRMNetLicenseRepresentation) ) 
#define IWMDRMNetReceiver2_ProcessRegistrationResponseEx(This,pbRegistrationResponse,cbRegistrationResponse,dwLocalIPv6ScopeID,ppunkCancellationCookie)    ( (This)->lpVtbl -> ProcessRegistrationResponseEx(This,pbRegistrationResponse,cbRegistrationResponse,dwLocalIPv6ScopeID,ppunkCancellationCookie) ) 
#define IWMDRMNetReceiver2_ProcessLicenseUpdate(This,pbLicenseUpdate,cbLicenseUpdate,ppLicense)    ( (This)->lpVtbl -> ProcessLicenseUpdate(This,pbLicenseUpdate,cbLicenseUpdate,ppLicense) ) 
#endif
#endif
#ifndef __IWMDRMNetTransmitter_INTERFACE_DEFINED__
#define __IWMDRMNetTransmitter_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMNetTransmitter;
typedef struct IWMDRMNetTransmitterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMNetTransmitter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMNetTransmitter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMNetTransmitter * This);
	HRESULT(STDMETHODCALLTYPE * SetLicenseChallenge) (IWMDRMNetTransmitter * This, BYTE * pbLicenseChallenge, DWORD cbLicenseChallenge);
	HRESULT(STDMETHODCALLTYPE * GetRootLicenseResponse) (IWMDRMNetTransmitter * This, BSTR bstrKID, BYTE ** ppbLicenseResponse, DWORD * pcbLicenseResponse);
	HRESULT(STDMETHODCALLTYPE * GetLeafLicenseResponse) (IWMDRMNetTransmitter * This, BSTR bstrKID, WMDRMNET_POLICY * pPolicy, IWMDRMEncrypt ** ppIWMDRMEncrypt, BYTE ** ppbLicenseResponse, DWORD * pcbLicenseResponse);
    END_INTERFACE
} IWMDRMNetTransmitterVtbl;
interface IWMDRMNetTransmitter
{
    CONST_VTBL struct IWMDRMNetTransmitterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMNetTransmitter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMNetTransmitter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMNetTransmitter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMNetTransmitter_SetLicenseChallenge(This,pbLicenseChallenge,cbLicenseChallenge)    ( (This)->lpVtbl -> SetLicenseChallenge(This,pbLicenseChallenge,cbLicenseChallenge) ) 
#define IWMDRMNetTransmitter_GetRootLicenseResponse(This,bstrKID,ppbLicenseResponse,pcbLicenseResponse)    ( (This)->lpVtbl -> GetRootLicenseResponse(This,bstrKID,ppbLicenseResponse,pcbLicenseResponse) ) 
#define IWMDRMNetTransmitter_GetLeafLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse)    ( (This)->lpVtbl -> GetLeafLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse) ) 
#endif
#endif
#ifndef __IWMDRMNetTransmitter2_INTERFACE_DEFINED__
#define __IWMDRMNetTransmitter2_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMNetTransmitter2;
typedef struct IWMDRMNetTransmitter2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMNetTransmitter2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMNetTransmitter2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMNetTransmitter2 * This);
	HRESULT(STDMETHODCALLTYPE * SetLicenseChallenge) (IWMDRMNetTransmitter2 * This, BYTE * pbLicenseChallenge, DWORD cbLicenseChallenge);
	HRESULT(STDMETHODCALLTYPE * GetRootLicenseResponse) (IWMDRMNetTransmitter2 * This, BSTR bstrKID, BYTE ** ppbLicenseResponse, DWORD * pcbLicenseResponse);
	HRESULT(STDMETHODCALLTYPE * GetLeafLicenseResponse) (IWMDRMNetTransmitter2 * This, BSTR bstrKID, WMDRMNET_POLICY * pPolicy, IWMDRMEncrypt ** ppIWMDRMEncrypt, BYTE ** ppbLicenseResponse, DWORD * pcbLicenseResponse);
	HRESULT(STDMETHODCALLTYPE * GetSimpleLicenseResponse) (IWMDRMNetTransmitter2 * This, BSTR bstrKID, WMDRMNET_POLICY * pPolicy, IWMDRMEncrypt ** ppIWMDRMEncrypt, BYTE ** ppbLicenseResponse, DWORD * pcbLicenseResponse);
	END_INTERFACE
} IWMDRMNetTransmitter2Vtbl;
interface IWMDRMNetTransmitter2
{
    CONST_VTBL struct IWMDRMNetTransmitter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMNetTransmitter2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMNetTransmitter2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMNetTransmitter2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMNetTransmitter2_SetLicenseChallenge(This,pbLicenseChallenge,cbLicenseChallenge)    ( (This)->lpVtbl -> SetLicenseChallenge(This,pbLicenseChallenge,cbLicenseChallenge) ) 
#define IWMDRMNetTransmitter2_GetRootLicenseResponse(This,bstrKID,ppbLicenseResponse,pcbLicenseResponse)    ( (This)->lpVtbl -> GetRootLicenseResponse(This,bstrKID,ppbLicenseResponse,pcbLicenseResponse) ) 
#define IWMDRMNetTransmitter2_GetLeafLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse)    ( (This)->lpVtbl -> GetLeafLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse) ) 
#define IWMDRMNetTransmitter2_GetSimpleLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse)    ( (This)->lpVtbl -> GetSimpleLicenseResponse(This,bstrKID,pPolicy,ppIWMDRMEncrypt,ppbLicenseResponse,pcbLicenseResponse) ) 
#endif
#endif
#ifndef __IWMDRMIndividualizationStatus_INTERFACE_DEFINED__
#define __IWMDRMIndividualizationStatus_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMIndividualizationStatus;
typedef struct IWMDRMIndividualizationStatusVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMIndividualizationStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMIndividualizationStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMIndividualizationStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDRMIndividualizationStatus * This, WM_INDIVIDUALIZE_STATUS * pStatus);
	END_INTERFACE
} IWMDRMIndividualizationStatusVtbl;
interface IWMDRMIndividualizationStatus
{
    CONST_VTBL struct IWMDRMIndividualizationStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMIndividualizationStatus_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMIndividualizationStatus_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMIndividualizationStatus_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMIndividualizationStatus_GetStatus(This,pStatus)    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 
#endif
#endif
#ifndef __IWMDRMLicenseBackupRestoreStatus_INTERFACE_DEFINED__
#define __IWMDRMLicenseBackupRestoreStatus_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMLicenseBackupRestoreStatus;
typedef struct IWMDRMLicenseBackupRestoreStatusVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMLicenseBackupRestoreStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMLicenseBackupRestoreStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMLicenseBackupRestoreStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IWMDRMLicenseBackupRestoreStatus * This, WM_BACKUP_RESTORE_STATUS * pStatus);
	END_INTERFACE
} IWMDRMLicenseBackupRestoreStatusVtbl;
interface IWMDRMLicenseBackupRestoreStatus
{
    CONST_VTBL struct IWMDRMLicenseBackupRestoreStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMLicenseBackupRestoreStatus_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMLicenseBackupRestoreStatus_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMLicenseBackupRestoreStatus_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMLicenseBackupRestoreStatus_GetStatus(This,pStatus)    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 
#endif
#endif
#ifndef __IWMDRMNonSilentLicenseAquisition_INTERFACE_DEFINED__
#define __IWMDRMNonSilentLicenseAquisition_INTERFACE_DEFINED__ 
extern const IID IID_IWMDRMNonSilentLicenseAquisition;
typedef struct IWMDRMNonSilentLicenseAquisitionVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMNonSilentLicenseAquisition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMNonSilentLicenseAquisition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMNonSilentLicenseAquisition * This);
	HRESULT(STDMETHODCALLTYPE * GetURL) (IWMDRMNonSilentLicenseAquisition * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * GetChallenge) (IWMDRMNonSilentLicenseAquisition * This, BSTR * pbstrChallenge);
    END_INTERFACE
} IWMDRMNonSilentLicenseAquisitionVtbl;
interface IWMDRMNonSilentLicenseAquisition
{
    CONST_VTBL struct IWMDRMNonSilentLicenseAquisitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMNonSilentLicenseAquisition_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IWMDRMNonSilentLicenseAquisition_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IWMDRMNonSilentLicenseAquisition_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IWMDRMNonSilentLicenseAquisition_GetURL(This,pbstrURL)    ( (This)->lpVtbl -> GetURL(This,pbstrURL) ) 
#define IWMDRMNonSilentLicenseAquisition_GetChallenge(This,pbstrChallenge)    ( (This)->lpVtbl -> GetChallenge(This,pbstrChallenge) ) 
#endif
#endif
#ifndef __WMDRMContentEnablerLib_LIBRARY_DEFINED__
#define __WMDRMContentEnablerLib_LIBRARY_DEFINED__ 
extern const IID LIBID_WMDRMContentEnablerLib;
extern const CLSID CLSID_WMDRMContentEnablerActivate;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif

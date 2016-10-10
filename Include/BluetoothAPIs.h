/*+@@file@@----------------------------------------------------------------*//*!
 \file		BluetoothAPIs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 21:20:14 2016
 \date		Modified on Sat Jul  2 21:20:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _BLUETOOTHAPIS_H_
#define _BLUETOOTHAPIS_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <bthdef.h>
#define BLUETOOTH_MAX_NAME_SIZE             (248)
#define BLUETOOTH_MAX_PASSKEY_SIZE          (16)
#define BLUETOOTH_MAX_PASSKEY_BUFFER_SIZE   (BLUETOOTH_MAX_PASSKEY_SIZE + 1)
#define BLUETOOTH_MAX_SERVICE_NAME_SIZE     (256)
#define BLUETOOTH_DEVICE_NAME_SIZE          (256)
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
typedef ULONGLONG BTH_ADDR;
typedef struct _BLUETOOTH_ADDRESS
{
	union
	{
		BTH_ADDR ullLong;
		BYTE rgBytes[6];
	};
} BLUETOOTH_ADDRESS_STRUCT;
#define BLUETOOTH_ADDRESS BLUETOOTH_ADDRESS_STRUCT
#define BLUETOOTH_NULL_ADDRESS ( (ULONGLONG) 0x0 )
typedef struct _BLUETOOTH_LOCAL_SERVICE_INFO
{
	BOOL Enabled;
	BLUETOOTH_ADDRESS btAddr;
	WCHAR szName[BLUETOOTH_MAX_SERVICE_NAME_SIZE];
	WCHAR szDeviceString[BLUETOOTH_DEVICE_NAME_SIZE];
} BLUETOOTH_LOCAL_SERVICE_INFO_STRUCT;
#define BLUETOOTH_LOCAL_SERVICE_INFO BLUETOOTH_LOCAL_SERVICE_INFO_STRUCT
typedef BLUETOOTH_LOCAL_SERVICE_INFO *PBLUETOOTH_LOCAL_SERVICE_INFO;
typedef struct _BLUETOOTH_FIND_RADIO_PARAMS
{
	DWORD dwSize;
} BLUETOOTH_FIND_RADIO_PARAMS;
typedef HANDLE HBLUETOOTH_RADIO_FIND;
HBLUETOOTH_RADIO_FIND WINAPI BluetoothFindFirstRadio(const BLUETOOTH_FIND_RADIO_PARAMS *pbtfrp, HANDLE *phRadio);
BOOL WINAPI BluetoothFindNextRadio(HBLUETOOTH_RADIO_FIND hFind, HANDLE *phRadio);
BOOL WINAPI BluetoothFindRadioClose(HBLUETOOTH_RADIO_FIND hFind);
typedef struct _BLUETOOTH_RADIO_INFO
{
	DWORD dwSize;
	BLUETOOTH_ADDRESS address;
	WCHAR szName[BLUETOOTH_MAX_NAME_SIZE];
	ULONG ulClassofDevice;
	USHORT lmpSubversion;
	USHORT manufacturer;
} BLUETOOTH_RADIO_INFO, *PBLUETOOTH_RADIO_INFO;
DWORD WINAPI BluetoothGetRadioInfo(HANDLE hRadio, PBLUETOOTH_RADIO_INFO pRadioInfo);
typedef struct _BLUETOOTH_DEVICE_INFO
{
	DWORD dwSize;
	BLUETOOTH_ADDRESS Address;
	ULONG ulClassofDevice;
	BOOL fConnected;
	BOOL fRemembered;
	BOOL fAuthenticated;
	SYSTEMTIME stLastSeen;
	SYSTEMTIME stLastUsed;
	WCHAR szName[BLUETOOTH_MAX_NAME_SIZE];
} BLUETOOTH_DEVICE_INFO_STRUCT;
#define BLUETOOTH_DEVICE_INFO BLUETOOTH_DEVICE_INFO_STRUCT
typedef BLUETOOTH_DEVICE_INFO *PBLUETOOTH_DEVICE_INFO;
#if (NTDDI_VERSION > NTDDI_VISTASP1 || (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
typedef enum _BLUETOOTH_AUTHENTICATION_METHOD
{
	BLUETOOTH_AUTHENTICATION_METHOD_LEGACY = 0x1,
	BLUETOOTH_AUTHENTICATION_METHOD_OOB,
	BLUETOOTH_AUTHENTICATION_METHOD_NUMERIC_COMPARISON,
	BLUETOOTH_AUTHENTICATION_METHOD_PASSKEY_NOTIFICATION,
	BLUETOOTH_AUTHENTICATION_METHOD_PASSKEY
} BLUETOOTH_AUTHENTICATION_METHOD, *PBLUETOOTH_AUTHENTICATION_METHOD;
typedef enum _BLUETOOTH_IO_CAPABILITY
{
	BLUETOOTH_IO_CAPABILITY_DISPLAYONLY = 0x00,
	BLUETOOTH_IO_CAPABILITY_DISPLAYYESNO = 0x01,
	BLUETOOTH_IO_CAPABILITY_KEYBOARDONLY = 0x02,
	BLUETOOTH_IO_CAPABILITY_NOINPUTNOOUTPUT = 0x03,
	BLUETOOTH_IO_CAPABILITY_UNDEFINED = 0xff
} BLUETOOTH_IO_CAPABILITY;
typedef enum _BLUETOOTH_AUTHENTICATION_REQUIREMENTS
{
	BLUETOOTH_MITM_ProtectionNotRequired = 0,
	BLUETOOTH_MITM_ProtectionRequired = 0x1,
	BLUETOOTH_MITM_ProtectionNotRequiredBonding = 0x2,
	BLUETOOTH_MITM_ProtectionRequiredBonding = 0x3,
	BLUETOOTH_MITM_ProtectionNotRequiredGeneralBonding = 0x4,
	BLUETOOTH_MITM_ProtectionRequiredGeneralBonding = 0x5,
	BLUETOOTH_MITM_ProtectionNotDefined = 0xff
} BLUETOOTH_AUTHENTICATION_REQUIREMENTS;
typedef struct _BLUETOOTH_AUTHENTICATION_CALLBACK_PARAMS
{
	BLUETOOTH_DEVICE_INFO deviceInfo;
	BLUETOOTH_AUTHENTICATION_METHOD authenticationMethod;
	BLUETOOTH_IO_CAPABILITY ioCapability;
	BLUETOOTH_AUTHENTICATION_REQUIREMENTS authenticationRequirements;
	union
	{
		ULONG Numeric_Value;
		ULONG Passkey;
	};
} BLUETOOTH_AUTHENTICATION_CALLBACK_PARAMS, *PBLUETOOTH_AUTHENTICATION_CALLBACK_PARAMS;
#endif
typedef struct _BLUETOOTH_DEVICE_SEARCH_PARAMS
{
	DWORD dwSize;
	BOOL fReturnAuthenticated;
	BOOL fReturnRemembered;
	BOOL fReturnUnknown;
	BOOL fReturnConnected;
	BOOL fIssueInquiry;
	UCHAR cTimeoutMultiplier;
	HANDLE hRadio;
} BLUETOOTH_DEVICE_SEARCH_PARAMS;
typedef HANDLE HBLUETOOTH_DEVICE_FIND;
HBLUETOOTH_DEVICE_FIND WINAPI BluetoothFindFirstDevice(const BLUETOOTH_DEVICE_SEARCH_PARAMS *pbtsp, BLUETOOTH_DEVICE_INFO *pbtdi);
BOOL WINAPI BluetoothFindNextDevice(HBLUETOOTH_DEVICE_FIND hFind, BLUETOOTH_DEVICE_INFO *pbtdi);
BOOL WINAPI BluetoothFindDeviceClose(HBLUETOOTH_DEVICE_FIND hFind);
DWORD WINAPI BluetoothGetDeviceInfo(HANDLE hRadio, BLUETOOTH_DEVICE_INFO *pbtdi);
DWORD WINAPI BluetoothUpdateDeviceRecord(const BLUETOOTH_DEVICE_INFO *pbtdi);
DWORD WINAPI BluetoothRemoveDevice(const BLUETOOTH_ADDRESS *pAddress);
typedef struct _BLUETOOTH_COD_PAIRS
{
	ULONG ulCODMask;
	LPCWSTR pcszDescription;
} BLUETOOTH_COD_PAIRS;
typedef BOOL(WINAPI *PFN_DEVICE_CALLBACK) (LPVOID pvParam, const BLUETOOTH_DEVICE_INFO *pDevice);
typedef struct _BLUETOOTH_SELECT_DEVICE_PARAMS
{
	DWORD dwSize;
	ULONG cNumOfClasses;
	BLUETOOTH_COD_PAIRS *prgClassOfDevices;
	LPWSTR pszInfo;
	HWND hwndParent;
	BOOL fForceAuthentication;
	BOOL fShowAuthenticated;
	BOOL fShowRemembered;
	BOOL fShowUnknown;
	BOOL fAddNewDeviceWizard;
	BOOL fSkipServicesPage;
	PFN_DEVICE_CALLBACK pfnDeviceCallback;
	LPVOID pvParam;
	DWORD cNumDevices;
	PBLUETOOTH_DEVICE_INFO pDevices;
} BLUETOOTH_SELECT_DEVICE_PARAMS;
BOOL WINAPI BluetoothSelectDevices(BLUETOOTH_SELECT_DEVICE_PARAMS *pbtsdp);
BOOL WINAPI BluetoothSelectDevicesFree(BLUETOOTH_SELECT_DEVICE_PARAMS *pbtsdp);
BOOL WINAPI BluetoothDisplayDeviceProperties(HWND hwndParent, BLUETOOTH_DEVICE_INFO *pbtdi);
DWORD WINAPI BluetoothAuthenticateDevice(HWND hwndParent, HANDLE hRadio, BLUETOOTH_DEVICE_INFO *pbtbi, PWSTR pszPasskey, ULONG ulPasskeyLength);
#if (NTDDI_VERSION > NTDDI_VISTASP1 ||    (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
#pragma deprecate("BluetoothAuthenticateDevice")
typedef struct _BLUETOOTH_PIN_INFO
{
	UCHAR pin[BTH_MAX_PIN_SIZE];
	UCHAR pinLength;
} BLUETOOTH_PIN_INFO, *PBLUETOOTH_PIN_INFO;
typedef struct _BLUETOOTH_OOB_DATA_INFO
{
	UCHAR C[16];
	UCHAR R[16];
} BLUETOOTH_OOB_DATA_INFO, *PBLUETOOTH_OOB_DATA_INFO;
typedef struct _BLUETOOTH_NUMERIC_COMPARISON_INFO
{
	ULONG NumericValue;
} BLUETOOTH_NUMERIC_COMPARISON_INFO, *PBLUETOOTH_NUMERIC_COMPARISON_INFO;
typedef struct _BLUETOOTH_PASSKEY_INFO
{
	ULONG passkey;
} BLUETOOTH_PASSKEY_INFO, *PBLUETOOTH_PASSKEY_INFO;
DWORD WINAPI BluetoothAuthenticateDeviceEx(HWND hwndParentIn, HANDLE hRadioIn, BLUETOOTH_DEVICE_INFO *pbtdiInout, PBLUETOOTH_OOB_DATA_INFO pbtOobData, AUTHENTICATION_REQUIREMENTS authenticationRequirement);
#endif
DWORD WINAPI BluetoothAuthenticateMultipleDevices(HWND hwndParent, HANDLE hRadio, DWORD cDevices, BLUETOOTH_DEVICE_INFO *rgbtdi);
#if (NTDDI_VERSION > NTDDI_VISTASP1 ||    (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
#pragma deprecate("BluetoothAuthenticateMultipleDevices")
#endif
#define BLUETOOTH_SERVICE_DISABLE   0x00
#define BLUETOOTH_SERVICE_ENABLE    0x01
#define BLUETOOTH_SERVICE_MASK      ( BLUETOOTH_ENABLE_SERVICE | BLUETOOTH_DISABLE_SERVICE )
DWORD WINAPI BluetoothSetServiceState(HANDLE hRadio, const BLUETOOTH_DEVICE_INFO *pbtdi, const GUID *pGuidService, DWORD dwServiceFlags);
DWORD WINAPI BluetoothEnumerateInstalledServices(HANDLE hRadio, const BLUETOOTH_DEVICE_INFO *pbtdi, DWORD *pcServices, GUID *pGuidServices);
BOOL WINAPI BluetoothEnableDiscovery(HANDLE hRadio, BOOL fEnabled);
BOOL WINAPI BluetoothIsDiscoverable(HANDLE hRadio);
BOOL WINAPI BluetoothEnableIncomingConnections(HANDLE hRadio, BOOL fEnabled);
BOOL WINAPI BluetoothIsConnectable(HANDLE hRadio);
typedef HANDLE HBLUETOOTH_AUTHENTICATION_REGISTRATION;
typedef BOOL(*PFN_AUTHENTICATION_CALLBACK) (LPVOID pvParam, PBLUETOOTH_DEVICE_INFO pDevice);
DWORD WINAPI BluetoothRegisterForAuthentication(const BLUETOOTH_DEVICE_INFO *pbtdi, HBLUETOOTH_AUTHENTICATION_REGISTRATION *phRegHandle, PFN_AUTHENTICATION_CALLBACK pfnCallback, PVOID pvParam);
#if (NTDDI_VERSION > NTDDI_VISTASP1 || (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
#pragma deprecate("BluetoothRegisterForAuthentication")
typedef BOOL(*PFN_AUTHENTICATION_CALLBACK_EX) (LPVOID pvParam, PBLUETOOTH_AUTHENTICATION_CALLBACK_PARAMS pAuthCallbackParams);
DWORD WINAPI BluetoothRegisterForAuthenticationEx(const BLUETOOTH_DEVICE_INFO *pbtdiIn, HBLUETOOTH_AUTHENTICATION_REGISTRATION *phRegHandleOut, PFN_AUTHENTICATION_CALLBACK_EX pfnCallbackIn, PVOID pvParam);
#endif
BOOL WINAPI BluetoothUnregisterAuthentication(HBLUETOOTH_AUTHENTICATION_REGISTRATION hRegHandle);
DWORD WINAPI BluetoothSendAuthenticationResponse(HANDLE hRadio, const BLUETOOTH_DEVICE_INFO *pbtdi, LPCWSTR pszPasskey);
#if (NTDDI_VERSION > NTDDI_VISTASP1 || (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
#pragma deprecate("BluetoothSendAuthenticationResponse")
typedef struct _BLUETOOTH_AUTHENTICATE_RESPONSE
{
	BLUETOOTH_ADDRESS bthAddressRemote;
	BLUETOOTH_AUTHENTICATION_METHOD authMethod;
	union
	{
		BLUETOOTH_PIN_INFO pinInfo;
		BLUETOOTH_OOB_DATA_INFO oobInfo;
		BLUETOOTH_NUMERIC_COMPARISON_INFO numericCompInfo;
		BLUETOOTH_PASSKEY_INFO passkeyInfo;
	};
	UCHAR negativeResponse;
} BLUETOOTH_AUTHENTICATE_RESPONSE, *PBLUETOOTH_AUTHENTICATE_RESPONSE;
DWORD WINAPI BluetoothSendAuthenticationResponseEx(HANDLE hRadioIn, PBLUETOOTH_AUTHENTICATE_RESPONSE pauthResponse);
#endif
typedef struct _SDP_ELEMENT_DATA
{
	SDP_TYPE type;
	SDP_SPECIFICTYPE specificType;
	union
	{
		SDP_LARGE_INTEGER_16 int128;
		LONGLONG int64;
		LONG int32;
		SHORT int16;
		CHAR int8;
		SDP_ULARGE_INTEGER_16 uint128;
		ULONGLONG uint64;
		ULONG uint32;
		USHORT uint16;
		UCHAR uint8;
		UCHAR booleanVal;
		GUID uuid128;
		ULONG uuid32;
		USHORT uuid16;
		struct
		{
			LPBYTE value;
			ULONG length;
		} string;
		struct
		{
			LPBYTE value;
			ULONG length;
		} url;
		struct
		{
			LPBYTE value;
			ULONG length;
		} sequence;
		struct
		{
			LPBYTE value;
			ULONG length;
		} alternative;
	} data;
} SDP_ELEMENT_DATA, *PSDP_ELEMENT_DATA;
DWORD WINAPI BluetoothSdpGetElementData(LPBYTE pSdpStream, ULONG cbSdpStreamLength, PSDP_ELEMENT_DATA pData);
typedef HANDLE HBLUETOOTH_CONTAINER_ELEMENT;
DWORD WINAPI BluetoothSdpGetContainerElementData(LPBYTE pContainerStream, ULONG cbContainerLength, HBLUETOOTH_CONTAINER_ELEMENT *pElement, PSDP_ELEMENT_DATA pData);
DWORD WINAPI BluetoothSdpGetAttributeValue(LPBYTE pRecordStream, ULONG cbRecordLength, USHORT usAttributeId, PSDP_ELEMENT_DATA pAttributeData);
typedef struct _SDP_STRING_TYPE_DATA
{
	USHORT encoding;
	USHORT mibeNum;
	USHORT attributeId;
} SDP_STRING_TYPE_DATA, *PSDP_STRING_TYPE_DATA;
DWORD WINAPI BluetoothSdpGetString(LPBYTE pRecordStream, ULONG cbRecordLength, const PSDP_STRING_TYPE_DATA pStringData, USHORT usStringOffset, PWSTR pszString, PULONG pcchStringLength);
typedef BOOL(CALLBACK *PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK) (ULONG uAttribId, LPBYTE pValueStream, ULONG cbStreamSize, LPVOID pvParam);
#define BluetoothEnumAttributes BluetoothSdpEnumAttributes
BOOL WINAPI BluetoothSdpEnumAttributes(LPBYTE pSDPStream, ULONG cbStreamSize, PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK pfnCallback, LPVOID pvParam);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI BluetoothSetLocalServiceInfo(HANDLE hRadioIn, const GUID *pClassGuid, ULONG ulInstance, const BLUETOOTH_LOCAL_SERVICE_INFO *pServiceInfoIn);
#endif
#if (NTDDI_VERSION > NTDDI_VISTASP1 ||    (NTDDI_VERSION == NTDDI_VISTASP1 && defined(VISTA_KB942567)))
BOOL WINAPI BluetoothIsVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion);
#endif
#endif

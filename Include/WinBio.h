/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinBio.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 17:34:12 2016
 \date		Modified on Sun Sep  4 17:34:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINBIO_H_9B9AD1F6_97B1_4647_923D_583FD7428C4C_
#define _WINBIO_H_9B9AD1F6_97B1_4647_923D_583FD7428C4C_
#if __POCC__ >= 500
#pragma once
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#include <winbio_types.h>
#include <winbio_err.h>
HRESULT WINAPI WinBioEnumServiceProviders(WINBIO_BIOMETRIC_TYPE Factor, WINBIO_BSP_SCHEMA **BspSchemaArray, SIZE_T *BspCount);
HRESULT WINAPI WinBioEnumBiometricUnits(WINBIO_BIOMETRIC_TYPE Factor, WINBIO_UNIT_SCHEMA **UnitSchemaArray, SIZE_T *UnitCount);
HRESULT WINAPI WinBioEnumDatabases(WINBIO_BIOMETRIC_TYPE Factor, WINBIO_STORAGE_SCHEMA **StorageSchemaArray, SIZE_T *StorageCount);
HRESULT WINAPI WinBioOpenSession(WINBIO_BIOMETRIC_TYPE Factor, WINBIO_POOL_TYPE PoolType, WINBIO_SESSION_FLAGS Flags, WINBIO_UNIT_ID *UnitArray, SIZE_T UnitCount, GUID *DatabaseId, WINBIO_SESSION_HANDLE *SessionHandle);
HRESULT WINAPI WinBioCloseSession(WINBIO_SESSION_HANDLE SessionHandle);
HRESULT WINAPI WinBioVerify(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE SubFactor, WINBIO_UNIT_ID *UnitId, BOOLEAN *Match, WINBIO_REJECT_DETAIL *RejectDetail);
typedef VOID(CALLBACK *PWINBIO_VERIFY_CALLBACK) (PVOID VerifyCallbackContext, HRESULT OperationStatus, WINBIO_UNIT_ID UnitId, BOOLEAN Match, WINBIO_REJECT_DETAIL RejectDetail);
HRESULT WINAPI WinBioVerifyWithCallback(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE SubFactor, PWINBIO_VERIFY_CALLBACK VerifyCallback, PVOID VerifyCallbackContext);
HRESULT WINAPI WinBioIdentify(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID *UnitId, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE *SubFactor, WINBIO_REJECT_DETAIL *RejectDetail);
typedef VOID(CALLBACK *PWINBIO_IDENTIFY_CALLBACK) (PVOID IdentifyCallbackContext, HRESULT OperationStatus, WINBIO_UNIT_ID UnitId, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE SubFactor, WINBIO_REJECT_DETAIL RejectDetail);
HRESULT WINAPI WinBioIdentifyWithCallback(WINBIO_SESSION_HANDLE SessionHandle, PWINBIO_IDENTIFY_CALLBACK IdentifyCallback, PVOID IdentifyCallbackContext);
HRESULT WINAPI WinBioWait(WINBIO_SESSION_HANDLE SessionHandle);
HRESULT WINAPI WinBioCancel(WINBIO_SESSION_HANDLE SessionHandle);
HRESULT WINAPI WinBioLocateSensor(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID *UnitId);
typedef VOID(CALLBACK *PWINBIO_LOCATE_SENSOR_CALLBACK) (PVOID LocateCallbackContext, HRESULT OperationStatus, WINBIO_UNIT_ID UnitId);
HRESULT WINAPI WinBioLocateSensorWithCallback(WINBIO_SESSION_HANDLE SessionHandle, PWINBIO_LOCATE_SENSOR_CALLBACK LocateCallback, PVOID LocateCallbackContext);
HRESULT WINAPI WinBioEnrollBegin(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_BIOMETRIC_SUBTYPE SubFactor, WINBIO_UNIT_ID UnitId);
HRESULT WINAPI WinBioEnrollCapture(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_REJECT_DETAIL *RejectDetail);
typedef VOID(CALLBACK *PWINBIO_ENROLL_CAPTURE_CALLBACK) (PVOID EnrollCallbackContext, HRESULT OperationStatus, WINBIO_REJECT_DETAIL RejectDetail);
HRESULT WINAPI WinBioEnrollCaptureWithCallback(WINBIO_SESSION_HANDLE SessionHandle, PWINBIO_ENROLL_CAPTURE_CALLBACK EnrollCallback, PVOID EnrollCallbackContext);
HRESULT WINAPI WinBioEnrollCommit(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_IDENTITY *Identity, BOOLEAN *IsNewTemplate);
HRESULT WINAPI WinBioEnrollDiscard(WINBIO_SESSION_HANDLE SessionHandle);
HRESULT WINAPI WinBioEnumEnrollments(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE **SubFactorArray, SIZE_T *SubFactorCount);
typedef VOID(CALLBACK *PWINBIO_EVENT_CALLBACK) (PVOID EventCallbackContext, HRESULT OperationStatus, PWINBIO_EVENT Event);
HRESULT WINAPI WinBioRegisterEventMonitor(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_EVENT_TYPE EventMask, PWINBIO_EVENT_CALLBACK EventCallback, PVOID EventCallbackContext);
HRESULT WINAPI WinBioUnregisterEventMonitor(WINBIO_SESSION_HANDLE SessionHandle);
HRESULT WINAPI WinBioCaptureSample(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_BIR_PURPOSE Purpose, WINBIO_BIR_DATA_FLAGS Flags, WINBIO_UNIT_ID *UnitId, PWINBIO_BIR *Sample, SIZE_T *SampleSize, WINBIO_REJECT_DETAIL *RejectDetail);
typedef VOID(CALLBACK *PWINBIO_CAPTURE_CALLBACK) (PVOID CaptureCallbackContext, HRESULT OperationStatus, WINBIO_UNIT_ID UnitId, PWINBIO_BIR Sample, SIZE_T SampleSize, WINBIO_REJECT_DETAIL RejectDetail);
HRESULT WINAPI WinBioCaptureSampleWithCallback(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_BIR_PURPOSE Purpose, WINBIO_BIR_DATA_FLAGS Flags, PWINBIO_CAPTURE_CALLBACK CaptureCallback, PVOID CaptureCallbackContext);
HRESULT WINAPI WinBioDeleteTemplate(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE SubFactor);
HRESULT WINAPI WinBioLockUnit(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId);
HRESULT WINAPI WinBioUnlockUnit(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId);
HRESULT WINAPI WinBioControlUnit(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId, WINBIO_COMPONENT Component, ULONG ControlCode, PUCHAR SendBuffer, SIZE_T SendBufferSize, PUCHAR ReceiveBuffer, SIZE_T ReceiveBufferSize, SIZE_T *ReceiveDataSize, ULONG *OperationStatus);
HRESULT WINAPI WinBioControlUnitPrivileged(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_UNIT_ID UnitId, WINBIO_COMPONENT Component, ULONG ControlCode, PUCHAR SendBuffer, SIZE_T SendBufferSize, PUCHAR ReceiveBuffer, SIZE_T ReceiveBufferSize, SIZE_T *ReceiveDataSize, ULONG *OperationStatus);
HRESULT WINAPI WinBioGetProperty(WINBIO_SESSION_HANDLE SessionHandle, WINBIO_PROPERTY_TYPE PropertyType, WINBIO_PROPERTY_ID PropertyId, WINBIO_UNIT_ID UnitId, WINBIO_IDENTITY *Identity, WINBIO_BIOMETRIC_SUBTYPE SubFactor, PVOID *PropertyBuffer, SIZE_T *PropertyBufferSize);
HRESULT WINAPI WinBioFree(PVOID Address);
HRESULT WINAPI WinBioSetCredential(WINBIO_CREDENTIAL_TYPE Type, PUCHAR Credential, SIZE_T CredentialSize, WINBIO_CREDENTIAL_FORMAT Format);
HRESULT WINAPI WinBioRemoveCredential(WINBIO_IDENTITY Identity, WINBIO_CREDENTIAL_TYPE Type);
HRESULT WINAPI WinBioRemoveAllCredentials(void);
HRESULT WINAPI WinBioRemoveAllDomainCredentials(void);
HRESULT WINAPI WinBioGetCredentialState(WINBIO_IDENTITY Identity, WINBIO_CREDENTIAL_TYPE Type, WINBIO_CREDENTIAL_STATE *CredentialState);
HRESULT WINAPI WinBioLogonIdentifiedUser(WINBIO_SESSION_HANDLE SessionHandle);
VOID WINAPI WinBioGetEnabledSetting(BOOLEAN *Value, PWINBIO_SETTING_SOURCE_TYPE Source);
VOID WINAPI WinBioGetLogonSetting(BOOLEAN *Value, PWINBIO_SETTING_SOURCE_TYPE Source);
VOID WINAPI WinBioGetDomainLogonSetting(BOOLEAN *Value, PWINBIO_SETTING_SOURCE_TYPE Source);
HRESULT WINAPI WinBioAcquireFocus(void);
HRESULT WINAPI WinBioReleaseFocus(void);
#endif
#endif

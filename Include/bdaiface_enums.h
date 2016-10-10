/*+@@file@@----------------------------------------------------------------*//*!
 \file		bdaiface_enums.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 20:32:28 2016
 \date		Modified on Sat Jul  2 20:32:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef BDAIFACE_ENUMS_H
#define BDAIFACE_ENUMS_H
#if __POCC__ >= 500
#pragma once
#endif
#include "exposeenums2managed.h"
ENUM SmartCardStatusType
{
    CardInserted = 0,
    CardRemoved,
    CardError,
    CardDataChanged,
    CardFirmwareUpgrade
}SmartCardStatusType;
ENUM SmartCardAssociationType
{
    NotAssociated = 0,
    Associated,
    AssociationUnknown
}SmartCardAssociationType;
ENUM LocationCodeSchemeType
{
    SCTE_18 = 0
}LocationCodeSchemeType;
typedef struct EALocationCodeType {
    LocationCodeSchemeType LocationCodeScheme;
    BYTE state_code;
    BYTE county_subdivision;
    WORD county_code;
} EALocationCodeType ;
ENUM EntitlementType
{
    Entitled = 0,
    NotEntitled,
    TechnicalFailure
}EntitlementType;
ENUM UICloseReasonType
{
    NotReady = 0,
    UserClosed,
    SystemClosed,
    DeviceClosed,
    ErrorClosed
}UICloseReasonType;
typedef struct SmartCardApplication {
    ApplicationTypeType ApplicationType;
    USHORT ApplicationVersion;
    BSTR pbstrApplicationName;
    BSTR pbstrApplicationURL;
} SmartCardApplication ;
ENUM BDA_DrmPairingError
{
    BDA_DrmPairing_Succeeded = 0,
    BDA_DrmPairing_HardwareFailure,
    BDA_DrmPairing_NeedRevocationData,
    BDA_DrmPairing_NeedIndiv,
    BDA_DrmPairing_Other,
    BDA_DrmPairing_DrmInitFailed,
    BDA_DrmPairing_DrmNotPaired,
    BDA_DrmPairing_DrmRePairSoon,
    BDA_DrmPairing_Aborted,
    BDA_DrmPairing_NeedSDKUpdate
}BDA_DrmPairingError;
#include "unexposeenums2managed.h"
#endif

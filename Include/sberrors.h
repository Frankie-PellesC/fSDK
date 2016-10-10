/*+@@file@@----------------------------------------------------------------*//*!
 \file		sberrors.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:03:57 2016
 \date		Modified on Fri Sep 16 22:03:57 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SB_ERRORS_H_
#define _SB_ERRORS_H_
#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_SB  0x813
#define MAKE_SBTSV_ERR(x) MAKE_HRESULT(SEVERITY_ERROR, FACILITY_SB, x)
#define MAKE_SB_ERR(x)                                  MAKE_SBTSV_ERR(x)
#define E_SB_NO_DISCONNECTED_SESSION                    MAKE_SB_ERR(1)
#define E_SB_NO_RESOURCE_PLUGIN                         MAKE_SB_ERR(2)
#define E_SB_TARGET_NOT_FOUND                           MAKE_SB_ERR(3)
#define E_SB_ENVIRONMENT_NOT_FOUND                      MAKE_SB_ERR(4)
#define E_SB_NO_FILTER_PLUGIN                           MAKE_SB_ERR(5)
#define E_SB_NO_HINT_DATA                               MAKE_SB_ERR(6)
#define E_SB_LOAD_BAL_FAILED                            MAKE_SB_ERR(7)
#define E_SB_QUERY_PLACEMENT_FAILED                     MAKE_SB_ERR(8)
#define E_SB_CREATE_PLACEMENT_FAILED                    MAKE_SB_ERR(9)
#define E_SB_ORCHESTRATION_FAILED                       MAKE_SB_ERR(10)
#define E_SB_DISCONN_SESSION_CHECK_FAILED               MAKE_SB_ERR(11)
#define E_SB_POLICY_PLUGIN_PROC_REQ_FAILED              MAKE_SB_ERR(12)
#define E_SB_NO_PLUGIN_CLSID_REG                        MAKE_SB_ERR(13)
#define E_SB_NO_PLUGIN_PROVIDER_REG                     MAKE_SB_ERR(14)
#define E_SB_PLUGIN_DISABLED_REG                        MAKE_SB_ERR(15)
#define E_SB_BAD_RESOURCE_PLUGIN                        MAKE_SB_ERR(16)
#define E_SB_BAD_FILTER_PLUGIN                          MAKE_SB_ERR(17)
#define E_SB_GROUP_EMPTY                                MAKE_SB_ERR(18)
#define E_SB_GROUP_NOT_EXIST                            MAKE_SB_ERR(19)
#define E_SB_NO_TARGET_IP_ADDRESS                       MAKE_SB_ERR(20)
#define E_SB_REDIRECT_TO_DESTINATION_FAILED             MAKE_SB_ERR(21)
#define E_SB_VM_WAKE_FAILED                             MAKE_SB_ERR(22)
#define E_SB_VM_BOOT_FAILED                             MAKE_SB_ERR(23)
#define E_SB_FARM_NOT_FOUND                             MAKE_SB_ERR(24)
#define E_SB_SERVICE_STOPPING                           MAKE_SB_ERR(25)
#define E_SB_TARGET_IN_DIFFERENT_FARM                   MAKE_SB_ERR(26)
#define E_SB_TARGET_TYPE_MISMATCH                       MAKE_SB_ERR(27)
#define E_SB_WRONG_TSV_URL_FORMAT                       MAKE_SB_ERR(28)
#define E_SB_UNIDENTIFIED_TARGET_TYPE                   MAKE_SB_ERR(29)
#define E_SB_WRONG_USER_DATA_FROM_PUB_SERVICE           MAKE_SB_ERR(30)
#define E_SB_TSV_URL_NOT_PRESENT                        MAKE_SB_ERR(31)
#define E_SB_UNKNOWN_RESOURCE_PLUGIN                    MAKE_SB_ERR(32)
#define E_SB_UNKNOWN_CP_PLUGIN                          MAKE_SB_ERR(33)
#define E_SB_NULL_CP_PLUGIN                             MAKE_SB_ERR(34)
#define E_SB_RESOURCE_STATE_UNCHANGED                   MAKE_SB_ERR(35)
#define E_SB_UNKNOWN                                    MAKE_SB_ERR(500)
#endif

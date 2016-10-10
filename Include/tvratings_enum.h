/*+@@file@@----------------------------------------------------------------*//*!
 \file		tvratings_enum.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:17:12 2016
 \date		Modified on Sat Sep 17 13:17:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TVRATINGS_ENUMS_H
#define TVRATINGS_ENUMS_H
#if __POCC__ >= 500
#pragma once
#endif
#include "exposeenums2managed.h"
ENUM16  EnTvRat_System
{
    MPAA                    = 0,
    US_TV                   = 1,
    Canadian_English        = 2,
    Canadian_French         = 3,
    Reserved4               = 4,
    System5                 = 5,
    System6                 = 6,
    Reserved7               = 7,
    PBDA                    = 8,
    AgeBased                = 9,
    TvRat_kSystems          = 10,
    TvRat_SystemDontKnow    = 255
} EnTvRat_System;
ENUM16 EnTvRat_GenericLevel
{
    TvRat_0                 = 0,
    TvRat_1                 = 1,
    TvRat_2                 = 2,
    TvRat_3                 = 3,
    TvRat_4                 = 4,
    TvRat_5                 = 5,
    TvRat_6                 = 6,
    TvRat_7                 = 7,
    TvRat_8                 = 8,
    TvRat_9                 = 9,
    TvRat_10                = 10,
    TvRat_11                = 11,
    TvRat_12                = 12,
    TvRat_13                = 13,
    TvRat_14                = 14,
    TvRat_15                = 15,
    TvRat_16                = 16,
    TvRat_17                = 17,
    TvRat_18                = 18,
    TvRat_19                = 19,
    TvRat_20                = 20,
    TvRat_21                = 21,
    TvRat_kLevels           = 22,
    TvRat_Unblock           = -1,
    TvRat_LevelDontKnow     = 255
} EnTvRat_GenericLevel;
ENUM16 EnTvRat_MPAA
{
    MPAA_NotApplicable      = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_0)),
    MPAA_G                  = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_1)),
    MPAA_PG                 = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_2)),
    MPAA_PG13               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_3)),
    MPAA_R                  = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_4)),
    MPAA_NC17               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_5)),
    MPAA_X                  = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_6)),
    MPAA_NotRated           = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_7))                  
} EnTvRat_MPAA;
ENUM16 EnTvRat_US_TV
{
    US_TV_None              = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_0)),
    US_TV_Y                 = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_1)),
    US_TV_Y7                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_2)),
    US_TV_G                 = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_3)),
    US_TV_PG                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_4)),
    US_TV_14                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_5)),
    US_TV_MA                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_6)),
    US_TV_None7             = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_7))                  
} EnTvRat_US_TV;
ENUM16 EnTvRat_CAE_TV
{
    CAE_TV_Exempt           = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_0)),
    CAE_TV_C                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_1)),
    CAE_TV_C8               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_2)),
    CAE_TV_G                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_3)),
    CAE_TV_PG               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_4)),
    CAE_TV_14               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_5)),
    CAE_TV_18               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_6)),
    CAE_TV_Reserved         = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_7))                  
} EnTvRat_CAE_TV;
ENUM16 EnTvRat_CAF_TV
{
    CAF_TV_Exempt           = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_0)),
    CAF_TV_G                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_1)),
    CAF_TV_8                = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_2)),
    CAF_TV_13               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_3)),
    CAF_TV_16               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_4)),
    CAF_TV_18               = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_5)),
    CAF_TV_Reserved6        = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_6)),
    CAF_TV_Reserved         = EHRECVR_MGD_NAMESPACE(RATLEVEL(TvRat_7))                  
} EnTvRat_CAF_TV;
FLAGS16 BfEnTvRat_GenericAttributes
{
    BfAttrNone                      = 0,
    BfIsBlocked                     = 1,
    BfIsAttr_1                      = 2,
    BfIsAttr_2                      = 4,    
    BfIsAttr_3                      = 8,
    BfIsAttr_4                      = 16,       
    BfIsAttr_5                      = 32,
    BfIsAttr_6                      = 64,
    BfIsAttr_7                      = 128,  
    BfValidAttrSubmask              = 255
} BfEnTvRat_GenericAttributes;
FLAGS16 BfEnTvRat_Attributes_US_TV
{
    US_TV_IsBlocked                     = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsBlocked)),
    US_TV_IsViolent                     = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsAttr_1)),
    US_TV_IsSexualSituation             = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsAttr_2)),
    US_TV_IsAdultLanguage               = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsAttr_3)),
    US_TV_IsSexuallySuggestiveDialog    = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsAttr_4)),
    US_TV_ValidAttrSubmask              = 31
} BfEnTvRat_Attributes_US_TV;
FLAGS16 BfEnTvRat_Attributes_MPAA
{
    MPAA_IsBlocked                      = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsBlocked)),
    MPAA_ValidAttrSubmask               = 1
} BfEnTvRat_Attributes_MPAA;
FLAGS16 BfEnTvRat_Attributes_CAE_TV
{
    CAE_IsBlocked                       = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsBlocked)),
    CAE_ValidAttrSubmask                = 1
} BfEnTvRat_Attributes_CAE_TV;
FLAGS16 BfEnTvRat_Attributes_CAF_TV
{
    CAF_IsBlocked                       = EHRECVR_MGD_NAMESPACE(RATATTR(BfIsBlocked)),
    CAF_ValidAttrSubmask                = 1
} BfEnTvRat_Attributes_CAF_TV;
#include "unexposeenums2managed.h"
#endif

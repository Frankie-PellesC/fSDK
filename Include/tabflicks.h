/*+@@file@@----------------------------------------------------------------*//*!
 \file		tabflicks.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:07:42 2016
 \date		Modified on Sat Sep 17 12:07:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TABFLICKS_H__
#define TABFLICKS_H__
#if __POCC__ >= 500
#pragma once
#endif
#define FLICK_WM_HANDLED_MASK 0x1
#define NUM_FLICK_DIRECTIONS 8
typedef enum FLICKDIRECTION
{
    FLICKDIRECTION_MIN = 0,
    FLICKDIRECTION_RIGHT = 0,
    FLICKDIRECTION_UPRIGHT = 1,
    FLICKDIRECTION_UP = 2,
    FLICKDIRECTION_UPLEFT = 3,
    FLICKDIRECTION_LEFT = 4,
    FLICKDIRECTION_DOWNLEFT = 5,
    FLICKDIRECTION_DOWN = 6,
    FLICKDIRECTION_DOWNRIGHT = 7,
    FLICKDIRECTION_INVALID = 8,
}FLICKDIRECTION;
typedef enum FLICKMODE
{
    FLICKMODE_MIN = 0,
    FLICKMODE_OFF = 0,
    FLICKMODE_ON = 1, 
    FLICKMODE_LEARNING = 2, 
    FLICKMODE_MAX = 2,
    FLICKMODE_DEFAULT = 2,
}FLICKMODE;
typedef enum FLICKACTION_COMMANDCODE
{
    FLICKACTION_COMMANDCODE_NULL = 0,
    FLICKACTION_COMMANDCODE_SCROLL = 1,
    FLICKACTION_COMMANDCODE_APPCOMMAND = 2,
    FLICKACTION_COMMANDCODE_CUSTOMKEY = 3,
    FLICKACTION_COMMANDCODE_KEYMODIFIER = 4,
}FLICKACTION_COMMANDCODE;
typedef struct FLICK_POINT
{
    INT x:16;
    INT y:16;
}FLICK_POINT;
typedef struct FLICK_DATA
{
    FLICKACTION_COMMANDCODE iFlickActionCommandCode:5;
    FLICKDIRECTION iFlickDirection:3;
    BOOL fControlModifier:1;
    BOOL fMenuModifier:1;
    BOOL fAltGRModifier:1;
    BOOL fWinModifier:1;
    BOOL fShiftModifier:1;
    INT  iReserved:2;
    BOOL fOnInkingSurface:1;
    INT  iActionArgument:16;
}FLICK_DATA;
typedef enum SCROLLDIRECTION
{
    SCROLLDIRECTION_UP = 0,
    SCROLLDIRECTION_DOWN = 1,
}SCROLLDIRECTION;
typedef enum KEYMODIFIER
{
    KEYMODIFIER_CONTROL = 1,
    KEYMODIFIER_MENU = 2,
    KEYMODIFIER_SHIFT = 4,
    KEYMODIFIER_WIN = 8,
    KEYMODIFIER_ALTGR = 16,
    KEYMODIFIER_EXT = 32,
}KEYMODIFIER;
#endif

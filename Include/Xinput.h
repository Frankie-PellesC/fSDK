/*+@@file@@----------------------------------------------------------------*//*!
 \file		Xinput.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:48:21 2016
 \date		Modified on Mon Sep 19 19:48:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _XINPUT_H_
#define _XINPUT_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <windef.h>
#define XINPUT_DLL_A  "xinput9_1_0.dll"
#define XINPUT_DLL_W L"xinput9_1_0.dll"
#ifdef UNICODE
    #define XINPUT_DLL XINPUT_DLL_W
#else
    #define XINPUT_DLL XINPUT_DLL_A
#endif
#define XINPUT_DEVTYPE_GAMEPAD          0x01
#define XINPUT_DEVSUBTYPE_GAMEPAD       0x01
#define XINPUT_CAPS_VOICE_SUPPORTED     0x0004
#define XINPUT_GAMEPAD_DPAD_UP          0x0001
#define XINPUT_GAMEPAD_DPAD_DOWN        0x0002
#define XINPUT_GAMEPAD_DPAD_LEFT        0x0004
#define XINPUT_GAMEPAD_DPAD_RIGHT       0x0008
#define XINPUT_GAMEPAD_START            0x0010
#define XINPUT_GAMEPAD_BACK             0x0020
#define XINPUT_GAMEPAD_LEFT_THUMB       0x0040
#define XINPUT_GAMEPAD_RIGHT_THUMB      0x0080
#define XINPUT_GAMEPAD_LEFT_SHOULDER    0x0100
#define XINPUT_GAMEPAD_RIGHT_SHOULDER   0x0200
#define XINPUT_GAMEPAD_A                0x1000
#define XINPUT_GAMEPAD_B                0x2000
#define XINPUT_GAMEPAD_X                0x4000
#define XINPUT_GAMEPAD_Y                0x8000
#define XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE  7849
#define XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE 8689
#define XINPUT_GAMEPAD_TRIGGER_THRESHOLD    30
#define XINPUT_FLAG_GAMEPAD             0x00000001
typedef struct _XINPUT_GAMEPAD
{
    WORD                                wButtons;
    BYTE                                bLeftTrigger;
    BYTE                                bRightTrigger;
    SHORT                               sThumbLX;
    SHORT                               sThumbLY;
    SHORT                               sThumbRX;
    SHORT                               sThumbRY;
} XINPUT_GAMEPAD, *PXINPUT_GAMEPAD;
typedef struct _XINPUT_STATE
{
    DWORD                               dwPacketNumber;
    XINPUT_GAMEPAD                      Gamepad;
} XINPUT_STATE, *PXINPUT_STATE;
typedef struct _XINPUT_VIBRATION
{
    WORD                                wLeftMotorSpeed;
    WORD                                wRightMotorSpeed;
} XINPUT_VIBRATION, *PXINPUT_VIBRATION;
typedef struct _XINPUT_CAPABILITIES
{
    BYTE                                Type;
    BYTE                                SubType;
    WORD                                Flags;
    XINPUT_GAMEPAD                      Gamepad;
    XINPUT_VIBRATION                    Vibration;
} XINPUT_CAPABILITIES, *PXINPUT_CAPABILITIES;
DWORD WINAPI XInputGetState(DWORD dwUserIndex, XINPUT_STATE *pState);
DWORD WINAPI XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION *pVibration);
DWORD WINAPI XInputGetCapabilities(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES *pCapabilities);
DWORD WINAPI XInputGetDSoundAudioDeviceGuids(DWORD dwUserIndex, GUID *pDSoundRenderGuid, GUID *pDSoundCaptureGuid);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		zmouse.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 13:12:10 2016
 \date		Modified on Tue Jun 28 13:12:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifdef UNICODE
#define MSH_MOUSEWHEEL L"MSWHEEL_ROLLMSG"
#else
#define MSH_MOUSEWHEEL "MSWHEEL_ROLLMSG"
#endif
#define WHEEL_DELTA      120
#ifndef WM_MOUSEWHEEL
#define WM_MOUSEWHEEL (WM_MOUSELAST+1)
#endif
#ifdef UNICODE
#define MOUSEZ_CLASSNAME  L"MouseZ"
#define MOUSEZ_TITLE      L"Magellan MSWHEEL"
#else
#define MOUSEZ_CLASSNAME  "MouseZ"
#define MOUSEZ_TITLE      "Magellan MSWHEEL"
#endif
#define MSH_WHEELMODULE_CLASS (MOUSEZ_CLASSNAME)
#define MSH_WHEELMODULE_TITLE (MOUSEZ_TITLE)
#ifdef UNICODE
#define MSH_WHEELSUPPORT L"MSH_WHEELSUPPORT_MSG"
#else
#define MSH_WHEELSUPPORT "MSH_WHEELSUPPORT_MSG"
#endif
#ifdef UNICODE
#define MSH_SCROLL_LINES L"MSH_SCROLL_LINES_MSG"
#else
#define MSH_SCROLL_LINES "MSH_SCROLL_LINES_MSG"
#endif
#ifndef  WHEEL_PAGESCROLL
#define WHEEL_PAGESCROLL  (UINT_MAX)
#endif
#ifndef SPI_SETWHEELSCROLLLINES
#define SPI_SETWHEELSCROLLLINES   105
#endif
__inline HWND HwndMSWheel(PUINT puiMsh_MsgMouseWheel, PUINT puiMsh_Msg3DSupport, PUINT puiMsh_MsgScrollLines, PBOOL pf3DSupport, PINT piScrollLines)
{
	HWND hdlMsWheel;
	hdlMsWheel = FindWindow(MSH_WHEELMODULE_CLASS, MSH_WHEELMODULE_TITLE);
	*puiMsh_MsgMouseWheel = RegisterWindowMessage(MSH_MOUSEWHEEL);
	*puiMsh_Msg3DSupport = RegisterWindowMessage(MSH_WHEELSUPPORT);
	*puiMsh_MsgScrollLines = RegisterWindowMessage(MSH_SCROLL_LINES);
	if (*puiMsh_Msg3DSupport)
		*pf3DSupport = (BOOL)SendMessage(hdlMsWheel, *puiMsh_Msg3DSupport, 0, 0);
	else
		*pf3DSupport = FALSE;
	if (*puiMsh_MsgScrollLines)
		*piScrollLines = (int)SendMessage(hdlMsWheel, *puiMsh_MsgScrollLines, 0, 0);
	else
		*piScrollLines = 3;
	return (hdlMsWheel);
}



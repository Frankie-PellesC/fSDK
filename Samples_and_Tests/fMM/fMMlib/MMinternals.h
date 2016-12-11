#ifndef _MMINTERNALS_H
#define _MMINTERNALS_H

#if __POCC__ >= 500
#pragma once
#endif

#include <strmif.h>
#include <control.h>

#include "SafeHandles.h"

#ifdef FMM_DLL
#define FMMATTR		__declspec(dllexport)
#else
#define FMMATTR
#endif
#define _FMMAPI		__stdcall

#define MM_SUCCEEDED(Status)	((HR = Status),((HRESULT)(HR)>=0))
#define MM_FAILED(Status)  		((HR = Status),((HRESULT)(HR)< 0))

#define HR		__hr
#undef SUCCEEDED
#undef FAILED
#define SUCCEEDED	MM_SUCCEEDED
#define FAILED		MM_FAILED

typedef struct _MMEDIA
{
	IGraphBuilder			*pigb;			//<! Graph Builder Interface
	IMediaControl			*pimc;			//<! Media Control Interface
	IMediaEventEx			*pimex;			//<! Media Event Extended interface
	IBasicAudio				*piba;			//<! Basic Audio Interface
	IMediaSeeking			*pims;			//<! Media seeking Interface
	IBaseFilter				*pivmr;			//<! Video Mixing Renderer Interface
	IVMRFilterConfig		*picfg;			//<! VMR configuration Interface
	IVMRWindowlessControl	*piwc;			//<! Windowless control Interface
	HWND					hwndVideo;		//<! Rendering window handle
	HWND					hwndNotify;		//<! Events notification window
	RECT					rcClipping;		//<! Rendering window clippong area
	DWORD					Status;			//<! Multimedia instance status
	float					fSpeed;			//<! Reproduction speed
	LONGLONG				duration;		//<! Current stream duration
} _MMEDIA, *_HMMEDIA;

typedef struct HMMEDIA *HMMEDIA;

#define _MMTYPE					6
#define MMRVOID

#define MMGETREALHANDLE(h)	_HMMEDIA _##h=SH_GetDataFromHandle((SHANDLE)h)

#define CHECKMMCLASS(h, r)	MMGETREALHANDLE(h);							\
							if (!_##h || !(dwMMLibSts & _MMLIBREADY))	\
								return r;

#define CHECKMMLIB(r)		if (!(dwMMLibSts & _MMLIBREADY))	\
								return r;

#define CHKBITS(p, f)			((p->Status & (f)) == (f))

#define _MMIFACEREADY			0x00000001
#define _MMFILEREADY			0x00000002
#define _MMSTOPPED				0x00000004
#define _MMRUNNING				0x00000008
#define _MMPAUSED				0x00000010
#define _MMWINDOWLESS			0x00000020
#define _MMWINDONOTIFY			0x00000040

#define _MMLIBREADY				0x00000001

/*!
 *	Global variables.
 */
extern DWORD dwMMLibSts;			//!> Library status
extern HRESULT	FMMATTR __hr;		//!> Last error

/*!
 *	Clean current instance context.
 *	You can reuse the instance with a new file.
 */
VOID    _FMMAPI _MM_Cleanup(HMMEDIA);
BOOL    _FMMAPI _MM_BuildInterface(SHANDLE hMm);
HRESULT _FMMAPI _MM_InitWindowlessVMR(HMMEDIA hMm);
BOOL    _FMMAPI _MM_ReleaseVmr(HMMEDIA hMm);

#endif	//_MMINTERNALS_H

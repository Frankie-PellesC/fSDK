/*+@@file@@----------------------------------------------------------------*//*!
 \file		MM.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Mon Jan  5 02:31:21 2015
 \date		Modified on Mon Jan  5 02:31:21 2015
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _MM_H
#define _MM_H

#if __POCC__ >= 500
#pragma once
#endif

#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "Ole32.lib")
#pragma comment(lib, "OleAut32.lib")
#ifndef FMM_DLL
#if defined(_WIN32) && !defined(_WIN64)		// For broken implementations or flying around defs...
#pragma comment(lib, "fMMlib.lib")
#elif defined(_WIN64)
#pragma comment(lib, "fMMlib64.lib")
#else
#error SafeHandles: Unknown Processor bits!
#endif
#endif

/*!
 *	MM library VERSION		Current version
 */
#define MMVERSION  "MMlib Ver 1.01.00"

#ifndef _MMINTERNALS_H
	typedef struct _MMEDIA *HMMEDIA;
	#ifdef FMM_DLL
	#define FMMATTR		__declspec(dllimport)
	#else
	#define FMMATTR
	#endif
#endif

#ifdef _WIN64
#define __CALL
#else
#define __CALL	__stdcall
#endif
#define FMMAPI			FMMATTR __CALL
#define FMMCALLBACK		__CALL

typedef BOOL FMMCALLBACK (*MM_ENUMCALLBACK)(LPVOID lpEnumeratedItem, LPVOID lpArgs);

#define MMSTOPPED				0x00000001
#define MMPLAYING				0x00000002
#define MMPAUSED				0x00000004

#define MMFULLSCREEN			((LPVOID)(0xffffffff))

#if defined(_STRIMF_H_) || defined(__strmif_h__)
typedef struct
{
	PFILTER pFilter;
	FILTER_INFO FilterInfo;
} MM_FILTERENUMDATA, *MM_LPFILTERENUMDATA;
#endif

typedef enum
	{
		MM_PROPPAGE_RENDERER = 1
	} MM_PROPPAGES;

typedef enum
	{
		MM_CLASS_AUDIO = 1,
		MM_CLASS_VIDEO,
		MM_CLASS_MUX,
		MM_CLASS_FILE
	} MM_CLASSFILTER;

/*!
 *	Initialize the Multimedia library.
 *	Returns TRUE if sucess.
 */
BOOL FMMAPI MM_Initialize(VOID);

/*!
 *	Uninitialize the Multimedia library.
 *	Destroys all open handles and release interfaces.
 *	Returns TRUE if sucess.
 */
BOOL FMMAPI MM_Uninitialize(VOID);

/*!
 *	Creates a new instance of the player.
 *	Returns an MM handle if successfull, NULL if fails.
 */
HMMEDIA FMMAPI MM_Create(VOID);

/*!
 *	Destroy MM instance.
 *	Must be called when the instance is no more required.
 */
VOID FMMAPI MM_Destroy(HMMEDIA);

/*!
 *	Load an MM file from disk.
 *	You can pass a full qualified filename with path and unit.
 *	Returns TRUE if successfully loaded, FALSE if error is present.
 */
BOOL FMMAPI MM_Load(HMMEDIA, LPCTSTR filename);

/*!
 *	Play the MM file from current instance.
 *	Returns TRUE if success, FALSE if error is present.
 */
BOOL FMMAPI MM_Play(HMMEDIA);

/*!
 *	Pause the MM file from current instance.
 *	Returns TRUE if success, FALSE if error is present.
 */
BOOL FMMAPI MM_Pause(HMMEDIA);

/*!
 *	Stop the MM file from current instance.
 *	Returns TRUE if success, FALSE if error is present.
 */
BOOL FMMAPI MM_Stop(HMMEDIA);

/*!
 *	Checks the running status of playing.
 *	Returs FALSE if still playing, TRUE if song is completed.
 *	If msTimeout = 0 returns immediatly (non blocking call).
 */
BOOL FMMAPI MM_WaitForCompletion(HMMEDIA, LONG msTimeout, LONG* EvCode);

/*!
 *	Set Volume.
 *	Min volume = -10000, Max volume = 0 (positive values fails).
 */
BOOL FMMAPI MM_SetVolume(HMMEDIA, LONG vol);

/*!
 *	Get Volume.
 *	Min volume = -10000, Max volume = 0 (positive values means error).
 */
BOOL FMMAPI MM_GetVolume(HMMEDIA hMm, PLONG plVolume);

/*!
 *	Get the duration of the song in 0.01 us.
 *	To get duration in seconds divide the result by 10,000,000.
 */
BOOL FMMAPI MM_GetDuration(HMMEDIA hMm, PLONGLONG pllDuration);

/*!
 *	Get the current playing position in units of 0.01 us from beginning of the song.
 *	To get the value expressed in seconds divide the result by 10,000,000.
 */
LONGLONG FMMAPI MM_GetCurrentPosition(HMMEDIA);

/*!
 *	Set the current playing position in units of 0.01 us from beginning of the song.
 *	To set the value expressed in seconds multiply seconds by 10,000,000.
 *	The function uses two position values, current position and stop position. These are defined as follows:
 *	When running, the current position is the current playback position, relative to the beginning of the source.
 *	When stopped or paused, the current position is the point where streaming will begin on the next run command.
 *	The stop position is the point where the stream will end.
 *	When the stop position is reached, no more data is streamed, and an EC_COMPLETE event is posted.
 *	(No automatic switch to a stopped state is made, however. For more information, see Responding to Events.)
 *	To retrieve these values, call the MM_GetPositions function. The returned values are always relative to
 *	the original media source.
 *	By default, the values are in reference time units. In some cases, you can change the time units;
 *	for more information, see Time Formats For Seek Commands.
 */
BOOL FMMAPI MM_SetPositions(HMMEDIA hMm, LONGLONG* pCurrent, LONGLONG* pStop, BOOL bAbsolutePositioning, DWORD flags);

/*!
 *	Returns the actual running state of the object.
 */
BOOL FMMAPI MM_GetRunningState(HMMEDIA hMm, LPDWORD pRstate);

/*!
 *	Returns the actual interface state of the object.
 *	If TRUE Interface is initialized and ready.
 */
BOOL FMMAPI MM_GetInterfaceState(HMMEDIA hMm);

/*!
 *	Returns the actual file state of the object.
 *	If TRUE a file is loaded and ready to play.
 */
BOOL FMMAPI MM_GetFileState(HMMEDIA hMm);

/*!
 *	Checks if the supplied handle is a valid one.
 *	Returns TRUE if handle is valid.
 */
BOOL FMMAPI MM_IsMmHandle(HMMEDIA hMm);

BOOL		FMMAPI MM_SetVideoWindow(HMMEDIA hMm, HWND hwndApp);
BOOL		FMMAPI MM_SetVideoArea(HMMEDIA hMm, PRECT prcDest);
HRESULT		FMMAPI MM_BlendApplicationImage(HMMEDIA hMm, HBITMAP hbm, PRECT prcSRC, PRECT prcDst, float fAlpha);
LONG		FMMAPI MM_GetNotifyFlags(HMMEDIA hMm);
BOOL		FMMAPI MM_SetNotifyFlags(HMMEDIA hMm, LONG lNoNotifyFlags);
BOOL		FMMAPI MM_SetNotifyWindow(HMMEDIA hMm, HWND hwnd, LONG lMsg, LONG_PTR lInstanceData);
BOOL		FMMAPI MM_CancelDefaultHandling(HMMEDIA hMm, LONG lEvCode);
BOOL		FMMAPI MM_RestoreDefaultHandling(HMMEDIA hMm, LONG lEvCode);
BOOL		FMMAPI MM_FreeEventParams(HMMEDIA hMm, LONG lEventCode, LONG_PTR lParam1, LONG_PTR lParam2);
BOOL		FMMAPI MM_GetEvent(HMMEDIA hMm, LPLONG lEventCode, LONG_PTR *lParam1, LONG_PTR *lParam2, LONG msTimeout);
HANDLE		FMMAPI MM_GetEventHandle(HMMEDIA hMm);
HRESULT		FMMAPI MM_GetLastError(HMMEDIA hMm);
BOOL		FMMAPI MM_SetLastError(HMMEDIA hMm, HRESULT hr);
DWORD		FMMAPI MM_GetCapabilities(HMMEDIA hMm);
DWORD		FMMAPI MM_CheckCapabilities(HMMEDIA hMm, DWORD dwCapabilities);
LONGLONG	FMMAPI MM_ConvertTimeFormat(HMMEDIA hMm, const GUID *pTargetFormat, LONGLONG Source, const GUID *pSourceFormat);
BOOL		FMMAPI MM_GetAvailable(HMMEDIA hMm, LONGLONG* pEarliest, LONGLONG* pLatest);
LONGLONG	FMMAPI MM_UpdateDuration(HMMEDIA hMm);
BOOL		FMMAPI MM_GetPositions(HMMEDIA hMm, LONGLONG *pCurrent, LONGLONG *pStop);
LONGLONG	FMMAPI MM_GetPreroll(HMMEDIA hMm);
double		FMMAPI MM_GetRate(HMMEDIA hMm);
LONGLONG	FMMAPI MM_GetStopPosition(HMMEDIA hMm);
BOOL		FMMAPI MM_GetTimeFormat(HMMEDIA hMm, GUID *pFormat);
BOOL		FMMAPI MM_IsFormatSupported(HMMEDIA hMm, GUID *pFormat);
BOOL		FMMAPI MM_IsUsingTimeFormat(HMMEDIA hMm, GUID *pFormat);
BOOL		FMMAPI MM_QueryPreferredFormat(HMMEDIA hMm, GUID *pFormat);
BOOL		FMMAPI MM_SetRate(HMMEDIA hMm, double dRate);
BOOL		FMMAPI MM_SetTimeFormat(HMMEDIA hMm, GUID *pFormat);

HRESULT		FMMAPI MM_EnumFilters (HMMEDIA hMm, MM_ENUMCALLBACK fn, LPVOID lpArgs);
HRESULT		FMMAPI MM_EnumSysDevices (HMMEDIA hMm, MM_ENUMCALLBACK fn, LPVOID lpArgs);
VOID		FMMAPI MM_EnumCapture(MM_ENUMCALLBACK fn, LPVOID lpArgs);

BOOL FMMAPI MM_PropPagesMixRenderer(HMMEDIA hMm, HWND hWnd);

#if defined(_STRIMF_H_) || defined(__strmif_h__)
VOID 		FMMAPI MM_FreeMediaType(AM_MEDIA_TYPE *mt);
VOID 		FMMAPI MM_DeleteMediaType(AM_MEDIA_TYPE *pmt);
HRESULT     FMMAPI GetPinMediaType(IPin *pPin, REFGUID majorType, REFGUID subType, REFGUID formatType, AM_MEDIA_TYPE **ppmt);

ISpecifyPropertyPages FMMAPI *MM_GetPropPage(PFILTER pFilter);
BOOL FMMAPI MM_PropPages(PFILTER pFilter, HWND hWnd);
HRESULT FMMAPI MM_GetClassID (PFILTER pFilter, CLSID *pClsid);
PFILTER FMMAPI MM_GetFilterByClass (HMMEDIA hMm, MM_CLASSFILTER eClassFilter);
#endif

BOOL FMMAPI MM_LoadA(HMMEDIA, LPCSTR filename);
BOOL FMMAPI MM_LoadW(HMMEDIA, LPCWSTR filename);
#ifdef UNICODE
#define MM_Load MM_LoadW
#else
#define MM_Load MM_LoadA
#endif

#endif //_MM_H

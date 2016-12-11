#include <windows.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetCurrentPosition
 \date		Created  on Fri Dec 26 20:13:27 2014
 \date		Modified on Fri Dec 26 20:13:27 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONGLONG FMMAPI MM_GetCurrentPosition(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, -1);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return -1;

	LONGLONG curpos = -1;
	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetCurrentPosition(_hMm->pims, &curpos)))
		return curpos;

	return -1;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetPositions
 \date		Created  on Fri Dec 26 20:13:21 2014
 \date		Modified on Fri Dec 26 20:13:21 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetPositions(HMMEDIA hMm, LONGLONG* pCurrent, LONGLONG* pStop, BOOL bAbsolutePositioning, DWORD flags)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if(bAbsolutePositioning)
		flags |= AM_SEEKING_AbsolutePositioning;
	else
		flags |= AM_SEEKING_RelativePositioning;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->SetPositions(_hMm->pims, pCurrent, flags, pStop, flags)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetCapabilities
 \date		Created  on Mon Dec 29 18:43:27 2014
 \date		Modified on Mon Dec 29 18:43:27 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
DWORD FMMAPI MM_GetCapabilities(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	DWORD dwCapabilities;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetCapabilities(_hMm->pims, &dwCapabilities)))
		return dwCapabilities;

	return 0L;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_CheckCapabilities
 \date		Created  on Mon Dec 29 18:43:29 2014
 \date		Modified on Mon Dec 29 18:43:29 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
DWORD FMMAPI MM_CheckCapabilities(HMMEDIA hMm, DWORD dwCapabilities)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->CheckCapabilities(_hMm->pims, &dwCapabilities)))
		return dwCapabilities;

	return 0L;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_ConvertTimeFormat
 \date		Created  on Mon Dec 29 18:48:47 2014
 \date		Modified on Mon Dec 29 18:48:47 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONGLONG FMMAPI MM_ConvertTimeFormat(HMMEDIA hMm, const GUID *pTargetFormat, LONGLONG Source, const GUID *pSourceFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	LONGLONG Target;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->ConvertTimeFormat(_hMm->pims, &Target, pTargetFormat, Source, pSourceFormat)))
		return Target;

	return 0LL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetAvailable
 \date		Created  on Mon Dec 29 18:51:35 2014
 \date		Modified on Mon Dec 29 18:51:35 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetAvailable(HMMEDIA hMm, LONGLONG* pEarliest, LONGLONG* pLatest)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetAvailable(_hMm->pims, pEarliest, pLatest)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetDuration
 \date		Created  on Mon Dec 29 18:54:49 2014
 \date		Modified on Mon Dec 29 18:54:49 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONGLONG FMMAPI MM_UpdateDuration(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return 0LL;

	LONGLONG Duration;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetDuration(_hMm->pims, &Duration)))
	{
		_hMm->duration = Duration;
		return Duration;
	}

	return 0LL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetPositions
 \date		Created  on Mon Dec 29 18:58:56 2014
 \date		Modified on Mon Dec 29 18:58:56 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetPositions(HMMEDIA hMm, LONGLONG *pCurrent, LONGLONG *pStop)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetPositions(_hMm->pims, pCurrent, pStop)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetPreroll
 \date		Created  on Mon Dec 29 19:00:54 2014
 \date		Modified on Mon Dec 29 19:00:54 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONGLONG FMMAPI MM_GetPreroll(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return 0LL;

	LONGLONG llPreroll;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetPreroll(_hMm->pims, &llPreroll)))
		return llPreroll;

	return 0LL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetRate
 \date		Created  on Mon Dec 29 19:03:08 2014
 \date		Modified on Mon Dec 29 19:03:08 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
double FMMAPI MM_GetRate(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return 0.0L;

	double dRate;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetRate(_hMm->pims, &dRate)))
		return dRate;

	return 0.0L;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetStopPosition
 \date		Created  on Mon Dec 29 19:04:26 2014
 \date		Modified on Mon Dec 29 19:04:26 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONGLONG FMMAPI MM_GetStopPosition(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return 0LL;

	LONGLONG pStop;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetStopPosition(_hMm->pims, &pStop)))
		return pStop;

	return 0LL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetTimeFormat
 \date		Created  on Mon Dec 29 19:06:15 2014
 \date		Modified on Mon Dec 29 19:06:15 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetTimeFormat(HMMEDIA hMm, GUID *pFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->GetTimeFormat(_hMm->pims, pFormat)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_IsFormatSupported
 \date		Created  on Mon Dec 29 19:08:39 2014
 \date		Modified on Mon Dec 29 19:08:39 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_IsFormatSupported(HMMEDIA hMm, GUID *pFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->IsFormatSupported(_hMm->pims, pFormat)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_IsUsingTimeFormat
 \date		Created  on Mon Dec 29 19:09:44 2014
 \date		Modified on Mon Dec 29 19:09:44 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_IsUsingTimeFormat(HMMEDIA hMm, GUID *pFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->IsUsingTimeFormat(_hMm->pims, pFormat)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_QueryPreferredFormat
 \date		Created  on Mon Dec 29 19:11:03 2014
 \date		Modified on Mon Dec 29 19:11:03 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_QueryPreferredFormat(HMMEDIA hMm, GUID *pFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->QueryPreferredFormat(_hMm->pims, pFormat)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetRate
 \date		Created  on Mon Dec 29 19:13:18 2014
 \date		Modified on Mon Dec 29 19:13:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetRate(HMMEDIA hMm, double dRate)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->SetRate(_hMm->pims, dRate)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetTimeFormat
 \date		Created  on Mon Dec 29 19:15:18 2014
 \date		Modified on Mon Dec 29 19:15:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetTimeFormat(HMMEDIA hMm, GUID *pFormat)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	if(MM_SUCCEEDED(_hMm->pims->lpVtbl->SetTimeFormat(_hMm->pims, pFormat)))
		return TRUE;

	return FALSE;
}

#include <windows.h>
#include <evcode.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_WaitForCompletion
 \date		Created  on Fri Dec 26 20:13:46 2014
 \date		Modified on Fri Dec 26 20:13:46 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_WaitForCompletion(HMMEDIA hMm, LONG msTimeout, LPLONG EvCode)
{
	CHECKMMCLASS(hMm, FALSE);

	if (CHKBITS(_hMm, (_MMIFACEREADY | _MMFILEREADY)))
	{
		_hMm->pimex->lpVtbl->WaitForCompletion(_hMm->pimex, msTimeout, EvCode);
		return *EvCode > 0;
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetNotifyFlags
 \date		Created  on Mon Dec 29 17:43:18 2014
 \date		Modified on Mon Dec 29 17:43:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
LONG FMMAPI MM_GetNotifyFlags(HMMEDIA hMm)
{
	LONG lNoNotifyFlags = AM_MEDIAEVENT_NONOTIFY;

	CHECKMMCLASS(hMm, lNoNotifyFlags);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return lNoNotifyFlags;

	if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->GetNotifyFlags(_hMm->pimex, &lNoNotifyFlags)))
		return lNoNotifyFlags;

	return AM_MEDIAEVENT_NONOTIFY;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetNotifyFlags
 \date		Created  on Mon Dec 29 17:46:29 2014
 \date		Modified on Mon Dec 29 17:46:29 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetNotifyFlags(HMMEDIA hMm, LONG lNoNotifyFlags)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->SetNotifyFlags(_hMm->pimex, lNoNotifyFlags)))
		return TRUE;

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetNotifyWindow
 \date		Created  on Mon Dec 29 17:56:18 2014
 \date		Modified on Mon Dec 29 17:56:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetNotifyWindow(HMMEDIA hMm, HWND hwnd, LONG lMsg, LONG_PTR lInstanceData)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	//if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->SetNotifyWindow(_hMm->pimex, (OAHWND)hwnd, lMsg, lInstanceData)))
	if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->SetNotifyWindow(_hMm->pimex, (long int)hwnd, lMsg, lInstanceData)))
	{
		if (hwnd)
		{
			_hMm->Status     |= _MMWINDONOTIFY;
			_hMm->hwndNotify  = hwnd;
		}
		else
		{
			_hMm->Status     &= ~_MMWINDONOTIFY;
			_hMm->hwndNotify  =  hwnd;
		}

		return TRUE;
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_CancelDefaultHandling
 \date		Created  on Mon Dec 29 18:02:33 2014
 \date		Modified on Mon Dec 29 18:02:33 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_CancelDefaultHandling(HMMEDIA hMm, LONG lEvCode)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	return MM_SUCCEEDED(_hMm->pimex->lpVtbl->CancelDefaultHandling(_hMm->pimex, lEvCode));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_RestoreDefaultHandling
 \date		Created  on Mon Dec 29 18:15:47 2014
 \date		Modified on Mon Dec 29 18:15:47 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_RestoreDefaultHandling(HMMEDIA hMm, LONG lEvCode)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	return MM_SUCCEEDED(_hMm->pimex->lpVtbl->RestoreDefaultHandling(_hMm->pimex, lEvCode));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_FreeEventParams
 \date		Created  on Mon Dec 29 18:05:26 2014
 \date		Modified on Mon Dec 29 18:05:26 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_FreeEventParams(HMMEDIA hMm, LONG lEventCode, LONG_PTR lParam1, LONG_PTR lParam2)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	return MM_SUCCEEDED(_hMm->pimex->lpVtbl->FreeEventParams(_hMm->pimex, lEventCode, lParam1, lParam2));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetEvent
 \date		Created  on Mon Dec 29 18:09:21 2014
 \date		Modified on Mon Dec 29 18:09:21 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetEvent(HMMEDIA hMm, LPLONG lEventCode, LONG_PTR *lParam1, LONG_PTR *lParam2, LONG msTimeout)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return FALSE;

	return MM_SUCCEEDED(_hMm->pimex->lpVtbl->GetEvent(_hMm->pimex, lEventCode, lParam1, lParam2, msTimeout));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetEventHandle
 \date		Created  on Mon Dec 29 18:14:12 2014
 \date		Modified on Mon Dec 29 18:14:12 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HANDLE FMMAPI MM_GetEventHandle(HMMEDIA hMm)
{
	HANDLE hEvent;

	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || !_hMm->pimex)
		return NULL;

	//if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->GetEventHandle(_hMm->pimex, (OAEVENT *)&hEvent)))
	if (MM_SUCCEEDED(_hMm->pimex->lpVtbl->GetEventHandle(_hMm->pimex, (LONG_PTR *)&hEvent)))
		return hEvent;

	return NULL;
}

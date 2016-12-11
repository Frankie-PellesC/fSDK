#include <windows.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetVolume
 \date		Created  on Fri Dec 26 20:13:40 2014
 \date		Modified on Fri Dec 26 20:13:40 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetVolume(HMMEDIA hMm, long vol)
{
	CHECKMMCLASS(hMm, FALSE);

	if (_hMm->Status & _MMIFACEREADY)
	{
		HRESULT hr = _hMm->piba->lpVtbl->put_Volume(_hMm->piba, vol);
		return MM_SUCCEEDED(hr);
	}
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetVolume
 \date		Created  on Fri Dec 26 20:13:36 2014
 \date		Modified on Fri Dec 26 20:13:36 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetVolume(HMMEDIA hMm, PLONG plVolume)
{
	CHECKMMCLASS(hMm, FALSE);

	if (_hMm->Status & _MMIFACEREADY)
	{
		HRESULT hr = _hMm->piba->lpVtbl->get_Volume(_hMm->piba, plVolume);

		if(MM_SUCCEEDED(hr))
			return TRUE;
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetDuration
 \date		Created  on Fri Dec 26 20:13:32 2014
 \date		Modified on Fri Dec 26 20:13:32 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetDuration(HMMEDIA hMm, PLONGLONG pllDuration)
{
	CHECKMMCLASS(hMm, FALSE);

	*pllDuration = _hMm->duration;

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GETRunningState
 \date		Created  on Sat Dec 27 21:08:07 2014
 \date		Modified on Sat Dec 27 21:08:07 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_GetRunningState(HMMEDIA hMm, LPDWORD pRstate)
{
	CHECKMMCLASS(hMm, FALSE);

	*pRstate = (_hMm->Status & (_MMSTOPPED | _MMRUNNING |_MMPAUSED))>>2;

	return TRUE;
}

/*!
 *	Returns the actual interface state of the object.
 *	If TRUE Interface is initialized and ready.
 */
BOOL FMMAPI MM_GetInterfaceState(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	return (_hMm->Status & _MMIFACEREADY) ? TRUE : FALSE;
}

/*!
 *	Returns the actual file state of the object.
 *	If TRUE a file is loaded and ready to play.
 */
BOOL FMMAPI MM_GetFileState(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	return (_hMm->Status & _MMFILEREADY) ? TRUE : FALSE;
}

/*!
 *	Checks if the supplied handle is a valid one.
 *	Returns TRUE if handle is valid.
 */
BOOL FMMAPI MM_IsMmHandle(HMMEDIA hMm)
{
	return SH_IsValidHandle((SHANDLE)hMm);
}

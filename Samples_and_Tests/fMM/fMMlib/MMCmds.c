#include <windows.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Play
 \date		Created  on Fri Dec 26 20:14:00 2014
 \date		Modified on Fri Dec 26 20:14:00 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_Play(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if (!(_hMm->Status & _MMRUNNING))
	{
		if (MM_FAILED(_hMm->pimc->lpVtbl->Run(_hMm->pimc)))
			return FALSE;

		_hMm->Status &= ~(_MMSTOPPED | _MMPAUSED);
		_hMm->Status |= _MMRUNNING;

		return TRUE;
	}
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Pause
 \date		Created  on Fri Dec 26 20:13:56 2014
 \date		Modified on Fri Dec 26 20:13:56 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_Pause(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if (_hMm->Status & _MMRUNNING)
	{
		if (MM_FAILED(_hMm->pimc->lpVtbl->Pause(_hMm->pimc)))
			return FALSE;

		_hMm->Status &= ~(_MMSTOPPED | _MMRUNNING);
		_hMm->Status |= _MMPAUSED;

		return TRUE;
	}
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Stop
 \date		Created  on Fri Dec 26 20:13:52 2014
 \date		Modified on Fri Dec 26 20:13:52 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_Stop(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, _MMIFACEREADY | _MMFILEREADY))
		return FALSE;

	if (_hMm->Status & _MMRUNNING)
	{
		if (MM_FAILED(_hMm->pimc->lpVtbl->Stop(_hMm->pimc)))
			return FALSE;

		_hMm->Status &= ~(_MMPAUSED | _MMRUNNING);
		_hMm->Status |= _MMSTOPPED;

		return TRUE;
	}
	return FALSE;
}

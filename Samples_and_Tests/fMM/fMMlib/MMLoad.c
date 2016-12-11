#define __STDC_WANT_LIB_EXT2__ 1
typedef struct FILE FILE;	//Due to PellesC bug in 'wchar.h'
#include <windows.h>
#include <stdio.h>
#include <wchar.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_LoadA
 \date		Created  on Fri Dec 26 23:04:22 2014
 \date		Modified on Fri Dec 26 23:04:22 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_LoadA(HMMEDIA hMm, LPCSTR szFile)
{
	CHECKMMCLASS(hMm, FALSE);

	wchar_t *d = NULL;

	aswprintf(&d, L"%s", szFile);
	if (!d)
		return FALSE;

	BOOL res = MM_LoadW(hMm, d);

	free(d);

	return res;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_LoadW
 \date		Created  on Fri Dec 26 20:14:05 2014
 \date		Modified on Fri Dec 26 20:14:05 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_LoadW(HMMEDIA hMm, LPCWSTR szFile)
{
	CHECKMMCLASS(hMm, FALSE);

	if ((_hMm->Status & _MMFILEREADY) ||!(_hMm->Status & _MMIFACEREADY))
		return FALSE;

	HRESULT hr = _hMm->pigb->lpVtbl->RenderFile(_hMm->pigb, szFile, NULL);

	if (MM_SUCCEEDED(hr))
	{
		_hMm->Status |= _MMFILEREADY;
		_hMm->pims->lpVtbl->GetDuration(_hMm->pims, &_hMm->duration); // returns 100ns units.

		_hMm->Status |= _MMSTOPPED;

		return TRUE;
	}

	return FALSE;
}


#include <windows.h>
#include "MMinternals.h"
#include "MM.h"
#include <uuids.h>
#ifdef FMM_USE_VMR9
#include <d3d9.h>
#include <vmr9.h>
#endif

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_ReleaseVmr
 \date		Created  on Sun Dec 28 19:53:44 2014
 \date		Modified on Sun Dec 28 19:53:44 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL _FMMAPI _MM_ReleaseVmr(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!_hMm->pigb)
		return FALSE;

	_hMm->pigb->lpVtbl->RemoveFilter(_hMm->pigb, _hMm->pivmr);

	if (_hMm->piwc)
	{
		_hMm->piwc->lpVtbl->Release(_hMm->piwc);
		_hMm->piwc = NULL;
	}

	if (_hMm->picfg)
	{
		_hMm->picfg->lpVtbl->Release(_hMm->picfg);
		_hMm->picfg = NULL;
	}

	if (_hMm->picfg)
	{
		_hMm->pivmr->lpVtbl->Release(_hMm->pivmr);
		_hMm->pivmr = NULL;
	}

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_InitWindowlessVMR
 \date		Created  on Sun Dec 28 19:42:29 2014
 \date		Modified on Sun Dec 28 19:42:29 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT _FMMAPI _MM_InitWindowlessVMR(HMMEDIA hMm)
{
	HRESULT hr;

	CHECKMMCLASS(hMm, FALSE);

	if (!_hMm->pigb || !_hMm->hwndVideo || (_hMm->Status & _MMFILEREADY) || (_hMm->Status & _MMWINDOWLESS))
	{
		return E_POINTER;
	}

	/*
	 *	Create the VMR if not created yet.
	 */
	if (_hMm->pivmr)
		_MM_ReleaseVmr(hMm);

	#ifdef FMM_USE_VMR9
		/* VMR 9 */
		hr = CoCreateInstance(&CLSID_VideoMixingRenderer9, NULL,
							CLSCTX_INPROC, &IID_IBaseFilter, (void**)&_hMm->pivmr);
	#else
		/* VMR 7 */
		hr = CoCreateInstance(&CLSID_VideoMixingRenderer, NULL,
							CLSCTX_INPROC, &IID_IBaseFilter, (void**)&_hMm->pivmr);
	#endif
	if (MM_FAILED(hr))
	{
		_hMm->pivmr = NULL;
		return hr;
	}

	/*
	 *	Add the VMR to the filter graph
	 */
	#ifdef FMM_USE_VMR9
		/* VMR 9 */
		hr = _hMm->pigb->lpVtbl->AddFilter(_hMm->pigb, _hMm->pivmr, L"VMR9");
	#else
		/* VMR 7 */
		hr = _hMm->pigb->lpVtbl->AddFilter(_hMm->pigb, _hMm->pivmr, L"Video Mixing Renderer");
	#endif
	if (MM_FAILED(hr)) 
	{
		_hMm->pivmr->lpVtbl->Release(_hMm->pivmr);
		_hMm->pivmr = NULL;
		return hr;
	}

	/*
	 *	Now before we can set the rendering mode we need a configure interface.
	 */
	#ifdef FMM_USE_VMR9
		hr = _hMm->pivmr->lpVtbl->QueryInterface(_hMm->pivmr, &IID_IVMRFilterConfig9, (void**)&_hMm->picfg);
	#else
		hr = _hMm->pivmr->lpVtbl->QueryInterface(_hMm->pivmr, &IID_IVMRFilterConfig,  (void**)&_hMm->picfg);
	#endif
	if (MM_FAILED(hr))
	{
		_hMm->picfg = NULL;
		return hr;
	}

	/*
	 *	Set mode
	 */
	hr = _hMm->picfg->lpVtbl->SetRenderingMode(_hMm->picfg, VMRMode_Windowless); 
	if (MM_FAILED(hr))
		return hr;

	#ifndef FMM_USE_VMR9
		/*
		 *	Force loading of mixer component
		 */
		hr = _hMm->picfg->lpVtbl->SetNumberOfStreams(_hMm->picfg, 1); 
		if (MM_FAILED(hr))
			if (hr != E_FAIL)	//If we get E_FAIL the mixer is already configured
				return hr;
	#endif

	/*
	 *	Create a windowless control interface
	 */
	#ifdef FMM_USE_VMR9
		hr = _hMm->pivmr->lpVtbl->QueryInterface(_hMm->pivmr, &IID_IVMRWindowlessControl9, (void**)&_hMm->piwc);
	#else
		hr = _hMm->pivmr->lpVtbl->QueryInterface(_hMm->pivmr, &IID_IVMRWindowlessControl, (void**)&_hMm->piwc);
	#endif
	if( MM_FAILED(hr))
	{
		_hMm->piwc = NULL;
		return hr;
	}

	/*
	 *	Assign the window.
	 */
	hr = _hMm->piwc->lpVtbl->SetVideoClippingWindow(_hMm->piwc, _hMm->hwndVideo); 

	if (MM_SUCCEEDED(hr))
	{
		_hMm->Status |= _MMWINDOWLESS;
	}

	return hr; 
} 

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SetVideoWindow
 \date		Created  on Sun Dec 28 20:23:30 2014
 \date		Modified on Sun Dec 28 20:23:30 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetVideoWindow(HMMEDIA hMm, HWND hwndApp)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || (_hMm->Status & _MMFILEREADY) || (_hMm->Status &_MMWINDOWLESS))
		return FALSE;

	_hMm->hwndVideo = hwndApp;

	return MM_SUCCEEDED(_MM_InitWindowlessVMR(hMm));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SetVideoArea
 \date		Created  on Sun Dec 28 18:25:41 2014
 \date		Modified on Sun Dec 28 18:25:41 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetVideoArea(HMMEDIA hMm, PRECT prcDest)
{
	RECT rect;

	CHECKMMCLASS(hMm, FALSE);

	if (!(_hMm->Status & _MMIFACEREADY) || (_hMm->Status & _MMFILEREADY) ||
							!_hMm->hwndVideo || (!(_hMm->Status & _MMWINDOWLESS)))
		return FALSE;

	/*
	 *	If no rectangle is supplied use the whole window area.
	 */
	if (!prcDest)
	{
		if (!GetClientRect(_hMm->hwndVideo, &rect))
			return FALSE;
		prcDest = &rect;
	}

	/*
	 *	Set destination rectangle for the video.
	 */
	if (MM_FAILED(_hMm->piwc->lpVtbl->SetVideoPosition(_hMm->piwc, NULL, prcDest)))
		return FALSE;

	/*
	 *	Specify the container window that the video should be clipped to.
	 */
	return MM_SUCCEEDED(_hMm->piwc->lpVtbl->SetVideoClippingWindow(_hMm->piwc, _hMm->hwndVideo));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		__MM_SetAlphaBitmap
 \date		Created  on Mon Dec 29 01:54:20 2014
 \date		Modified on Mon Dec 29 01:54:20 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static HRESULT _FMMAPI __MM_SetAlphaBitmap(HMMEDIA hMm, VMRALPHABITMAP *pbmpInfo)
{
    IVMRMixerBitmap* pBmp;

	CHECKMMCLASS(hMm, FALSE);

	#ifdef FMM_USE_VMR9
		/* VMR 9 */
    	HRESULT hr = _hMm->piwc->lpVtbl->QueryInterface(_hMm->piwc, &IID_IVMRMixerBitmap9, (LPVOID *)&pBmp);
	#else
		/* VMR 7 */
    	HRESULT hr = _hMm->piwc->lpVtbl->QueryInterface(_hMm->piwc, &IID_IVMRMixerBitmap, (LPVOID *)&pBmp);
	#endif
    if (MM_SUCCEEDED(hr)) 
    {
        pBmp->lpVtbl->SetAlphaBitmap(pBmp, pbmpInfo);
        pBmp->lpVtbl->Release(pBmp);
    }

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_BlendApplicationImage
 \date		Created  on Sun Dec 28 21:35:38 2014
 \date		Modified on Sun Dec 28 21:35:38 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI MM_BlendApplicationImage(HMMEDIA hMm, HBITMAP hbm, PRECT prcSRC, PRECT prcDst, float fAlpha)
{
    LONG cx, cy;
    HRESULT hr;

	CHECKMMCLASS(hMm, FALSE);

	if (!_hMm->piwc || !_hMm->hwndVideo)
		return E_POINTER;

    VMRALPHABITMAP bmpInfo;
    ZeroMemory(&bmpInfo, sizeof(bmpInfo) );

	if (!hbm)
	{
		bmpInfo.dwFlags = VMRBITMAP_DISABLE;

		return __MM_SetAlphaBitmap(hMm, &bmpInfo);
	}

    hr = _hMm->piwc->lpVtbl->GetNativeVideoSize(_hMm->piwc, &cx, &cy, NULL, NULL);
    if (MM_FAILED(hr))
        return hr;
    
    HDC hdc = GetDC(_hMm->hwndVideo);
    if (hdc == NULL)
    {
        return E_FAIL;
    }
    
    HDC hdcBmp = CreateCompatibleDC(hdc);
    ReleaseDC(_hMm->hwndVideo, hdc);
    
    if (hdcBmp == NULL)
    {
        return E_FAIL;
    }
    
    BITMAP bm;
    if (0 == GetObject(hbm, sizeof(bm), &bm))
    {
        DeleteDC(hdcBmp);
        return E_FAIL;
    }
    
    HBITMAP hbmOld = (HBITMAP)SelectObject(hdcBmp, hbm);
    if (hbmOld == 0)
    {
        DeleteDC(hdcBmp);
        return E_FAIL;
    }
    
    bmpInfo.dwFlags = VMRBITMAP_HDC;
    bmpInfo.hdc = hdcBmp;
    
	if (!prcSRC)
	{
		/*
		 *	If no source dimension specified show the entire bitmap.
		 */
		SetRect(&bmpInfo.rSrc, 0, 0, bm.bmWidth, bm.bmHeight);
	}

	if (!prcDst)
	{
		/*
		 *	If destination specified show the full image in the top-left corner of the video.
		 */
		bmpInfo.rDest.left   = 0.f;
		bmpInfo.rDest.top    = 0.f;
		bmpInfo.rDest.right  = (float)bm.bmWidth  / (float)cx;
		bmpInfo.rDest.bottom = (float)bm.bmHeight / (float)cy;
	}
	else
	{
		if (MMFULLSCREEN == prcDst)
		{
			bmpInfo.rDest.left   = 0.0;
			bmpInfo.rDest.top    = 0.0;
			bmpInfo.rDest.right  = 1.0;
			bmpInfo.rDest.bottom = 1.0;
		}
		else
		{
			bmpInfo.rDest.left   = (float)prcDst->left   / (float)cx;
			bmpInfo.rDest.top    = (float)prcDst->top    / (float)cy;
			bmpInfo.rDest.right  = (float)prcDst->right  / (float)cx;
			bmpInfo.rDest.bottom = (float)prcDst->bottom / (float)cy;
		}
	}

    
    /*
	 *	Set the transparency value (1.0 is opaque, 0.0 is transparent).
	 */
    bmpInfo.fAlpha = fAlpha;
    
	hr = __MM_SetAlphaBitmap(hMm, &bmpInfo);
    
    DeleteObject(SelectObject(hdcBmp, hbmOld));
    DeleteDC(hdcBmp);
    return hr;
}

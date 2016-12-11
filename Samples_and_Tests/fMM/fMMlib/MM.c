/*+@@file@@----------------------------------------------------------------*//*!
 \file		MM.c
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Wed Dec 31 02:12:51 2014
 \date		Modified on Wed Dec 31 02:12:51 2014
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <windows.h>
#include "MMinternals.h"
#include "MM.h"
#ifndef USE_TYPELIB
#include <uuids.h>
#endif

#include "SafeHandles.h"

DWORD dwMMLibSts = 0L;

#ifndef _MM_ERR_CODE_IN_STRUCT
HRESULT FMMATTR __hr = S_OK;
#endif

#ifdef FMM_DLL
BOOL APIENTRY DllMain(HINSTANCE hInstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            /*
             * Microsoft says:
             *
             * The DLL is being loaded into the virtual address space of the current
             * process as a result of the process starting up or as a result of a call
             * to LoadLibrary. DLLs can use this opportunity to initialize any instance
             * data or to use the TlsAlloc function to allocate a thread local storage
             * (TLS) index.
             */
            break;

        case DLL_THREAD_ATTACH:
            /*
             * Microsoft says:
             *
             * The current process is creating a new thread. When this occurs, the system
             * calls the entry-point function of all DLLs currently attached to the process.
             * The call is made in the context of the new thread. DLLs can use this opportunity
             * to initialize a TLS slot for the thread. A thread calling the DLL entry-point
             * function with DLL_PROCESS_ATTACH does not call the DLL entry-point function
             * with DLL_THREAD_ATTACH.
             *
             * Note that a DLL's entry-point function is called with this value only by threads
             * created after the DLL is loaded by the process. When a DLL is loaded using
             * LoadLibrary, existing threads do not call the entry-point function of the newly
             * loaded DLL.
             */
            break;

        case DLL_THREAD_DETACH:
            /*
             * Microsoft says:
             *
             * A thread is exiting cleanly. If the DLL has stored a pointer to allocated memory
             * in a TLS slot, it should use this opportunity to free the memory. The system calls
             * the entry-point function of all currently loaded DLLs with this value. The call
             * is made in the context of the exiting thread.
             */
            break;

        case DLL_PROCESS_DETACH:
            /*
             * Microsoft says:
             *
             * The DLL is being unloaded from the virtual address space of the calling process as
             * a result of unsuccessfully loading the DLL, termination of the process, or a call
             * to FreeLibrary. The DLL can use this opportunity to call the TlsFree function to
             * free any TLS indices allocated by using TlsAlloc and to free any thread local data.
             *
             * Note that the thread that receives the DLL_PROCESS_DETACH notification is not
             * necessarily the same thread that received the DLL_PROCESS_ATTACH notification.
             */
            break;
    }

    /* Return success */
    return TRUE;
}
#endif


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Initialize
 \date		Created  on Wed Dec 31 20:09:10 2014
 \date		Modified on Wed Dec 31 20:09:10 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_Initialize(VOID)
{
	SH_Initialize();

	HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
	if (SUCCEEDED(hr))
	{
		dwMMLibSts |= _MMLIBREADY;
		return TRUE;
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		__MM_Cleanup
 \date		Created  on Wed Dec 31 20:12:11 2014
 \date		Modified on Wed Dec 31 20:12:11 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static BOOL _FMMAPI __MM_Cleanup(SHANDLE hmm, LPVOID p)
{
	MM_Destroy((HMMEDIA)hmm);
	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Uninitialize
 \date		Created  on Wed Dec 31 20:09:18 2014
 \date		Modified on Wed Dec 31 20:09:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_Uninitialize(VOID)
{
	SH_UserShutDown(__MM_Cleanup, NULL);

	CoUninitialize();

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Create
 \date		Created  on Fri Dec 26 20:14:19 2014
 \date		Modified on Fri Dec 26 20:14:19 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HMMEDIA FMMAPI MM_Create(void)
{
	HMMEDIA hMm = (HMMEDIA)SH_CreateHandleAllocData(sizeof(_MMEDIA), 0);
	if (!hMm)
		return NULL;

	_HMMEDIA _hMm = SH_GetDataFromHandle((SHANDLE)hMm);


	if (!_MM_BuildInterface((SHANDLE)hMm))
	{
		SH_ReleaseHandle((SHANDLE)_hMm);
		return NULL;
	}

	return hMm;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Destroy
 \date		Created  on Fri Dec 26 20:14:15 2014
 \date		Modified on Fri Dec 26 20:14:15 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID FMMAPI MM_Destroy(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm, MMRVOID);

	_MM_Cleanup(hMm);

	SH_ReleaseHandle((SHANDLE)hMm);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_Cleanup
 \date		Created  on Fri Dec 26 20:14:10 2014
 \date		Modified on Fri Dec 26 20:14:10 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID _FMMAPI _MM_Cleanup(HMMEDIA hMm)
{
	CHECKMMCLASS(hMm,MMRVOID);

	if (_hMm->pimc && (_hMm->Status & (_MMRUNNING | _MMPAUSED)))
		_hMm->pimc->lpVtbl->Stop(_hMm->pimc);

	if (_hMm->pivmr)
		_MM_ReleaseVmr(hMm);

	if(_hMm->pimc)
	{
		_hMm->pimc->lpVtbl->Release(_hMm->pimc);
		_hMm->pimc = NULL;
	}

	if(_hMm->pimex)
	{
		_hMm->pimex->lpVtbl->Release(_hMm->pimex);
		_hMm->pimex = NULL;
	}

	if(_hMm->piba)
	{
		_hMm->piba->lpVtbl->Release(_hMm->piba);
		_hMm->piba = NULL;
	}

	if(_hMm->pims)
	{
		_hMm->pims->lpVtbl->Release(_hMm->pims);
		_hMm->pims = NULL;
	}

	if(_hMm->pigb)
	{
		//_hMm->pigb->lpVtbl->Abort(_hMm->pigb);	//new
		_hMm->pigb->lpVtbl->Release(_hMm->pigb);
		_hMm->pigb = NULL;
	}

	memset(_hMm, 0, sizeof(_MMEDIA));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_BuildInterface
 \date		Created  on Sat Dec 27 19:33:11 2014
 \date		Modified on Sat Dec 27 19:33:11 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL _FMMAPI _MM_BuildInterface(SHANDLE hMm)
{
	CHECKMMCLASS(hMm, FALSE);

	if (_hMm->Status & _MMIFACEREADY)
		_MM_Cleanup((HMMEDIA)hMm);

	if  (
			MM_SUCCEEDED(CoCreateInstance( &CLSID_FilterGraph,
										NULL,
										CLSCTX_INPROC_SERVER,
										&IID_IGraphBuilder,
										(void **)&_hMm->pigb))
		)
	{
		_hMm->pigb->lpVtbl->QueryInterface(_hMm->pigb, &IID_IMediaControl, (void **)&_hMm->pimc);
		if (!_hMm->pimc)
			goto IfaceFailed;

		_hMm->pigb->lpVtbl->QueryInterface(_hMm->pigb, &IID_IMediaEventEx, (void **)&_hMm->pimex);
		if (!_hMm->pimex)
			goto IfaceFailed;

		_hMm->pigb->lpVtbl->QueryInterface(_hMm->pigb, &IID_IBasicAudio, (void**)&_hMm->piba);
		if (!_hMm->piba)
			goto IfaceFailed;

		_hMm->pigb->lpVtbl->QueryInterface(_hMm->pigb, &IID_IMediaSeeking, (void**)&_hMm->pims);
		if (!_hMm->pims)
			goto IfaceFailed;

		_hMm->pims->lpVtbl->SetTimeFormat(_hMm->pims, &TIME_FORMAT_MEDIA_TIME);

		_hMm->Status |= _MMIFACEREADY;

		return TRUE;
	}

IfaceFailed:
	_MM_Cleanup((HMMEDIA)hMm);

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetLastError
 \date		Created  on Mon Dec 29 18:25:39 2014
 \date		Modified on Mon Dec 29 18:25:39 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI MM_GetLastError(HMMEDIA hMm)
{
	#ifdef _MM_ERR_CODE_IN_STRUCT
		CHECKMMCLASS(hMm, E_POINTER);
	#endif
	return HR;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_SetLastError
 \date		Created  on Mon Dec 29 18:28:16 2014
 \date		Modified on Mon Dec 29 18:28:16 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_SetLastError(HMMEDIA hMm, HRESULT hr)
{
	#ifdef _MM_ERR_CODE_IN_STRUCT
		CHECKMMCLASS(hMm, E_POINTER);
	#endif

	HR = hr;

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_FreeMediaType
 \details	Release the format block for a media type.
 \date		Created  on Mon Dec 29 20:23:39 2014
 \date		Modified on Mon Dec 29 20:33:05 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID FMMAPI MM_FreeMediaType(AM_MEDIA_TYPE *mt)
{
    if (mt->cbFormat != 0)
    {
        CoTaskMemFree((PVOID)mt->pbFormat);
        mt->cbFormat = 0;
        mt->pbFormat = NULL;
    }
    if (mt->pUnk != NULL)
    {
        // pUnk should not be used.
        mt->pUnk->lpVtbl->Release(mt->pUnk);
        mt->pUnk = NULL;
    }
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_DeleteMediaType
 \details	Delete a media type structure that was allocated on the heap.
 \date		Created  on Mon Dec 29 20:33:48 2014
 \date		Modified on Mon Dec 29 20:33:48 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID FMMAPI MM_DeleteMediaType(AM_MEDIA_TYPE *pmt)
{
    if (pmt != NULL)
    {
        MM_FreeMediaType(pmt); 
        CoTaskMemFree(pmt);
    }
}

/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmutil.c
 \par Description 
            DirectMusic framework classes for playing DirectMusic segments 
            and DirectMusic scripts.
            Feel free to use this class as a starting point for adding 
            extra functionality.
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:59:21 2016
 \date		Modified on Sun Dec  4 18:59:21 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#include <dmusicc.h>
#include <dmusici.h>
#include <dsound.h>
#include <dxerr8.h>
#include "DMUtil.h"
#include "DXUtil.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerNew
 \date		Created  on Sun Dec  4 18:59:46 2016
 \date		Modified on Sun Dec  4 18:59:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CMusicManager *CMusicManagerNew(void)
{
	CMusicManager *this = malloc(sizeof(CMusicManager));
	if (!this)
		return NULL;

    this->m_pLoader       = NULL;
    this->m_pPerformance  = NULL;
    
    // Initialize COM
    HRESULT hr = CoInitialize(NULL);
    this->m_bCleanupCOM = SUCCEEDED(hr);

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerDelete
 \date		Created  on Sun Dec  4 18:59:54 2016
 \date		Modified on Sun Dec  4 18:59:54 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CMusicManagerDelete(CMusicManager *this)
{
    SAFE_RELEASE( this->m_pLoader ); 

    if( this->m_pPerformance )
    {
        // If there is any music playing, stop it.
        this->m_pPerformance->lpVtbl->Stop( this->m_pPerformance, NULL, NULL, 0, 0 );
        this->m_pPerformance->lpVtbl->CloseDown(this->m_pPerformance);

        SAFE_RELEASE( this->m_pPerformance );
    }

    if( this->m_bCleanupCOM )
        CoUninitialize();
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerInitialize
 \details	Inits DirectMusic using a standard audio path
 \date		Created  on Sun Dec  4 19:00:09 2016
 \date		Modified on Sun Dec  4 19:00:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerInitialize( CMusicManager *this, HWND hWnd, DWORD dwPChannels, DWORD dwDefaultPathType )
{
    HRESULT hr;

    // Create loader object
    if( FAILED( hr = CoCreateInstance( &CLSID_DirectMusicLoader, NULL, CLSCTX_INPROC, 
                                       &IID_IDirectMusicLoader8, (void**)&this->m_pLoader ) ) )
        return DXTRACE_ERR( TEXT("CoCreateInstance"), hr );

    // Create performance object
    if( FAILED( hr = CoCreateInstance( &CLSID_DirectMusicPerformance, NULL, CLSCTX_INPROC, 
                                       &IID_IDirectMusicPerformance8, (void**)&this->m_pPerformance ) ) )
        return DXTRACE_ERR( TEXT("CoCreateInstance"), hr );

    // Initialize the performance with the standard audio path.
    // This initializes both DirectMusic and DirectSound and 
    // sets up the synthesizer. Typcially its easist to use an 
    // audio path for playing music and sound effects.
    if( FAILED( hr = this->m_pPerformance->lpVtbl->InitAudio( this->m_pPerformance, NULL, NULL, hWnd, dwDefaultPathType, 
                                                dwPChannels, DMUS_AUDIOF_ALL, NULL ) ) )
    {
        if( hr == DSERR_NODRIVER )
        {
            DXTRACE( "Warning: No sound card found\n" );
            return hr;
        }

        return DXTRACE_ERR( TEXT("InitAudio"), hr );
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerSetSearchDirectory
 \details	Sets the search directory.  If not called, the current working 
            directory is used to load content.
 \date		Created  on Sun Dec  4 19:00:25 2016
 \date		Modified on Sun Dec  4 19:00:25 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerSetSearchDirectory( CMusicManager *this, const TCHAR* strMediaPath )
{
    if( NULL == this->m_pLoader )
        return E_UNEXPECTED;

    // DMusic only takes wide strings
    WCHAR wstrMediaPath[MAX_PATH];
    DXUtil_ConvertGenericStringToWide( wstrMediaPath, strMediaPath, -1 );

    return this->m_pLoader->lpVtbl->SetSearchDirectory( this->m_pLoader, &GUID_DirectMusicAllTypes, 
                                          wstrMediaPath, FALSE );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerGetDefaultAudioPath
 \date		Created  on Sun Dec  4 19:00:36 2016
 \date		Modified on Sun Dec  4 19:00:36 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
IDirectMusicAudioPath8* CMusicManagerGetDefaultAudioPath(CMusicManager *this)
{
    IDirectMusicAudioPath8* pAudioPath = NULL;
    if( NULL == this->m_pPerformance )
        return NULL;

    this->m_pPerformance->lpVtbl->GetDefaultAudioPath( this->m_pPerformance, &pAudioPath );
    return pAudioPath;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCollectGarbage
 \details	Tells the loader to cleanup any garbage from previously 
            released objects.
 \date		Created  on Sun Dec  4 19:00:57 2016
 \date		Modified on Sun Dec  4 19:00:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CMusicManagerCollectGarbage(CMusicManager *this)
{
    if( this->m_pLoader )
        this->m_pLoader->lpVtbl->CollectGarbage(this->m_pLoader);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCreateSegmentFromFile
 \date		Created  on Sun Dec  4 19:01:09 2016
 \date		Modified on Sun Dec  4 19:01:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerCreateSegmentFromFile( CMusicManager *this, CMusicSegment** ppSegment, 
                                              TCHAR* strFileName, 
                                              BOOL bDownloadNow,
                                              BOOL bIsMidiFile )
{
    HRESULT               hr;
    IDirectMusicSegment8* pSegment = NULL;

    // DMusic only takes wide strings
    WCHAR wstrFileName[MAX_PATH];
    DXUtil_ConvertGenericStringToWide( wstrFileName, strFileName, -1 );

    if ( FAILED( hr = this->m_pLoader->lpVtbl->LoadObjectFromFile( this->m_pLoader, &CLSID_DirectMusicSegment,
                                                     &IID_IDirectMusicSegment8,
                                                     wstrFileName,
                                                     (LPVOID*) &pSegment ) ) )
    {
        if( hr == DMUS_E_LOADER_FAILEDOPEN )
            return hr;
        return DXTRACE_ERR( TEXT("LoadObjectFromFile"), hr );
    }

    *ppSegment = CMusicSegmentNew( this->m_pPerformance, this->m_pLoader, pSegment );
    if (!*ppSegment)
        return E_OUTOFMEMORY;

    if( bIsMidiFile )
    {
        if( FAILED( hr = pSegment->lpVtbl->SetParam( pSegment, &GUID_StandardMIDIFile, 0xFFFFFFFF, 0, 0, NULL ) ) )
            return DXTRACE_ERR( TEXT("SetParam"), hr );
    }

    if( bDownloadNow )
    {
        if( FAILED( hr = CMusicSegmentDownload(*ppSegment, NULL) ) )
            return DXTRACE_ERR( TEXT("Download"), hr );
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCreateSegmentFromResource
 \date		Created  on Sun Dec  4 19:01:26 2016
 \date		Modified on Sun Dec  4 19:01:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerCreateSegmentFromResource( CMusicManager *this, CMusicSegment** ppSegment, 
                                                  TCHAR* strResource,
                                                  TCHAR* strResourceType,
                                                  BOOL bDownloadNow,
                                                  BOOL bIsMidiFile )
{
    HRESULT               hr;
    IDirectMusicSegment8* pSegment      = NULL;
    HRSRC                 hres          = NULL;
    void*                 pMem          = NULL;
    DWORD                 dwSize        = 0;
    DMUS_OBJECTDESC       objdesc;

    // Find the resource
    hres = FindResource( NULL,strResource,strResourceType );
    if( NULL == hres ) 
        return E_FAIL;

    // Load the resource
    pMem = (void*)LoadResource( NULL, hres );
    if( NULL == pMem ) 
        return E_FAIL;

    // Store the size of the resource
    dwSize = SizeofResource( NULL, hres ); 
    
    // Set up our object description 
    ZeroMemory(&objdesc,sizeof(DMUS_OBJECTDESC));
    objdesc.dwSize = sizeof(DMUS_OBJECTDESC);
    objdesc.dwValidData = DMUS_OBJ_MEMORY | DMUS_OBJ_CLASS;
    objdesc.guidClass = CLSID_DirectMusicSegment;
    objdesc.llMemLength =(LONGLONG)dwSize;
    objdesc.pbMemData = (BYTE*)pMem;
    
    if (FAILED ( hr = this->m_pLoader->lpVtbl->GetObject( this->m_pLoader, &objdesc,
                                            &IID_IDirectMusicSegment8,
                                            (void**)&pSegment ) ) )
    {
        if( hr == DMUS_E_LOADER_FAILEDOPEN )
            return hr;
        return DXTRACE_ERR( TEXT("LoadObjectFromFile"), hr );
    }

    *ppSegment = CMusicSegmentNew( this->m_pPerformance, this->m_pLoader, pSegment );
    if( NULL == *ppSegment )
        return E_OUTOFMEMORY;

    if( bIsMidiFile )
    {
        // Do this to make sure that the default General MIDI set 
        // is connected appropriately to the MIDI file and 
        // all instruments sound correct.                  
		if (FAILED(hr = pSegment->lpVtbl->SetParam(pSegment, &GUID_StandardMIDIFile, 0xFFFFFFFF, 0, 0, NULL)))
            return DXTRACE_ERR( TEXT("SetParam"), hr );
    }

    if( bDownloadNow )
    {
        // The segment needs to be download first before playing.  
        // However, some apps may want to wait before calling this 
        // to because the download allocates memory for the 
        // instruments. The more instruments currently downloaded, 
        // the more memory is in use by the synthesizer.
        if( FAILED( hr = CMusicSegmentDownload(*ppSegment, NULL) ) )
            return DXTRACE_ERR( TEXT("Download"), hr );
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCreateScriptFromFile
 \date		Created  on Sun Dec  4 19:01:44 2016
 \date		Modified on Sun Dec  4 19:01:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerCreateScriptFromFile(CMusicManager *this, CMusicScript **ppScript, TCHAR *strFileName)
{
    HRESULT               hr;
    IDirectMusicScript* pScript = NULL;

    // DMusic only takes wide strings
    WCHAR wstrFileName[MAX_PATH];
    DXUtil_ConvertGenericStringToWide( wstrFileName, strFileName, -1 );
    
    if ( FAILED( hr = this->m_pLoader->lpVtbl->LoadObjectFromFile( this->m_pLoader, &CLSID_DirectMusicScript,
                                                     &IID_IDirectMusicScript8,
                                                     wstrFileName,
                                                     (LPVOID*) &pScript ) ) )
        return DXTRACE_ERR_NOMSGBOX( TEXT("LoadObjectFromFile"), hr );

    if ( FAILED( hr = pScript->lpVtbl->Init( pScript, (IDirectMusicPerformance *)this->m_pPerformance, NULL ) ) )
        return DXTRACE_ERR( TEXT("Init"), hr );

    *ppScript = CMusicScriptNew( this->m_pPerformance, this->m_pLoader, pScript );
    if (!*ppScript)
        return E_OUTOFMEMORY;

    return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCreateChordMapFromFile
 \date		Created  on Sun Dec  4 19:01:56 2016
 \date		Modified on Sun Dec  4 19:01:56 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerCreateChordMapFromFile(CMusicManager *this, IDirectMusicChordMap8 **ppChordMap, TCHAR *strFileName)
{
    // DMusic only takes wide strings
    WCHAR wstrFileName[MAX_PATH];
    DXUtil_ConvertGenericStringToWide( wstrFileName, strFileName, -1 );

	return this->m_pLoader->lpVtbl->LoadObjectFromFile(this->m_pLoader, &CLSID_DirectMusicChordMap,
											&IID_IDirectMusicChordMap8, wstrFileName, (LPVOID *)ppChordMap);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerCreateStyleFromFile
 \date		Created  on Sun Dec  4 19:02:03 2016
 \date		Modified on Sun Dec  4 19:02:03 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerCreateStyleFromFile(CMusicManager *this, IDirectMusicStyle8 **ppStyle, TCHAR *strFileName)
{
	// DMusic only takes wide strings
	WCHAR wstrFileName[MAX_PATH];
	DXUtil_ConvertGenericStringToWide(wstrFileName, strFileName, -1);

	return this->m_pLoader->lpVtbl->LoadObjectFromFile(this->m_pLoader, &CLSID_DirectMusicStyle, &IID_IDirectMusicStyle8, wstrFileName, (LPVOID *)ppStyle);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicManagerGetMotifFromStyle
 \date		Created  on Sun Dec  4 19:02:12 2016
 \date		Modified on Sun Dec  4 19:02:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicManagerGetMotifFromStyle(CMusicManager *this, IDirectMusicSegment8 **ppMotif8, TCHAR *strStyle, TCHAR *strMotif)
{
	HRESULT hr;
	IDirectMusicStyle8  *pStyle = NULL;
	IDirectMusicSegment *pMotif = NULL;

	if (FAILED(hr = CMusicManagerCreateStyleFromFile(this, &pStyle, strStyle)))
		return DXTRACE_ERR(TEXT("CreateStyleFromFile"), hr);

	if (pStyle)
	{
		// DMusic only takes wide strings
		WCHAR wstrMotif[MAX_PATH];
		DXUtil_ConvertGenericStringToWide(wstrMotif, strMotif, -1);

		hr = pStyle->lpVtbl->GetMotif(pStyle, wstrMotif, &pMotif);
		SAFE_RELEASE(pStyle);

		if (FAILED(hr))
			return DXTRACE_ERR(TEXT("GetMotif"), hr);

		pMotif->lpVtbl->QueryInterface(pMotif, &IID_IDirectMusicSegment8, (LPVOID *)ppMotif8);
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentNew
 \date		Created  on Sun Dec  4 19:02:22 2016
 \date		Modified on Sun Dec  4 19:02:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CMusicSegment *CMusicSegmentNew(IDirectMusicPerformance8 * pPerformance, IDirectMusicLoader8 * pLoader, IDirectMusicSegment8 * pSegment)
{
	CMusicSegment *this = malloc(sizeof(CMusicSegment));
	if (!this)
		return NULL;

	this->m_pPerformance       = pPerformance;
	this->m_pLoader            = pLoader;
	this->m_pSegment           = pSegment;
	this->m_pEmbeddedAudioPath = NULL;
	this->m_bDownloaded        = FALSE;

	// Try to pull out an audio path from the segment itself if there is one.
	// This embedded audio path will be used instead of the default
	// audio path if the app doesn't wish to use an overriding audio path.
	IUnknown *pConfig = NULL;
	if (SUCCEEDED(this->m_pSegment->lpVtbl->GetAudioPathConfig(this->m_pSegment, &pConfig)))
	{
		this->m_pPerformance->lpVtbl->CreateAudioPath(this->m_pPerformance, pConfig, TRUE, &this->m_pEmbeddedAudioPath);
		SAFE_RELEASE(pConfig);
	}

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentDelete
 \date		Created  on Sun Dec  4 19:02:29 2016
 \date		Modified on Sun Dec  4 19:02:29 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CMusicSegmentDelete(CMusicSegment *this)
{
	if (this->m_pSegment)
	{
		// Tell the loader that this object should now be released
		if (this->m_pLoader)
			this->m_pLoader->lpVtbl->ReleaseObjectByUnknown(this->m_pLoader, (IUnknown *)this->m_pSegment);

		if (this->m_bDownloaded)
		{
			if (this->m_pEmbeddedAudioPath)
				this->m_pSegment->lpVtbl->Unload(this->m_pSegment, (IUnknown *)this->m_pEmbeddedAudioPath);
			else
				this->m_pSegment->lpVtbl->Unload(this->m_pSegment, (IUnknown *)this->m_pPerformance);
		}

		SAFE_RELEASE(this->m_pEmbeddedAudioPath);
		SAFE_RELEASE(this->m_pSegment);
	}

	this->m_pPerformance = NULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentPlay
 \details	Plays the sound using voice management flags.
            Pass in DSBPLAY_LOOPING in the dwFlags to loop the sound
 \date		Created  on Sun Dec  4 19:02:54 2016
 \date		Modified on Sun Dec  4 19:02:54 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentPlay(CMusicSegment *this, DWORD dwFlags, IDirectMusicAudioPath8 *pAudioPath)
{
	if (this->m_pSegment == NULL || this->m_pPerformance == NULL)
		return CO_E_NOTINITIALIZED;

	if (!this->m_bDownloaded)
		return E_FAIL;

	// If an audio path was passed in then use it, otherwise
	// use the embedded audio path if there was one.
	if (pAudioPath == NULL && this->m_pEmbeddedAudioPath != NULL)
		pAudioPath = this->m_pEmbeddedAudioPath;

	// If pAudioPath is NULL then this plays on the default audio path.
	return this->m_pPerformance->lpVtbl->PlaySegmentEx(this->m_pPerformance,
							(IUnknown *)this->m_pSegment, 0, NULL, dwFlags, 0, 0, NULL, (IUnknown *)pAudioPath);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentDownload
 \date		Created  on Sun Dec  4 19:03:10 2016
 \date		Modified on Sun Dec  4 19:03:10 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentDownload(CMusicSegment *this, IDirectMusicAudioPath8 *pAudioPath)
{
	HRESULT hr;

	if (this->m_pSegment == NULL)
		return CO_E_NOTINITIALIZED;

	// If no audio path was passed in, then download
	// to the embedded audio path if it exists 
	// else download to the performance
	if (pAudioPath == NULL)
	{
		if (this->m_pEmbeddedAudioPath)
			hr = this->m_pSegment->lpVtbl->Download(this->m_pSegment, (IUnknown *)this->m_pEmbeddedAudioPath);
		else
			hr = this->m_pSegment->lpVtbl->Download(this->m_pSegment, (IUnknown *)this->m_pPerformance);
	}
	else
	{
		hr = this->m_pSegment->lpVtbl->Download(this->m_pSegment, (IUnknown *)pAudioPath);
	}

	if (SUCCEEDED(hr))
		this->m_bDownloaded = TRUE;

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentUnload
 \date		Created  on Sun Dec  4 19:03:19 2016
 \date		Modified on Sun Dec  4 19:03:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentUnload(CMusicSegment *this, IDirectMusicAudioPath8 *pAudioPath)
{
	HRESULT hr;

	if (this->m_pSegment == NULL)
		return CO_E_NOTINITIALIZED;

	// If no audio path was passed in, then unload 
	// from the embedded audio path if it exists 
	// else unload from the performance
	if (pAudioPath == NULL)
	{
		if (this->m_pEmbeddedAudioPath)
			hr = this->m_pSegment->lpVtbl->Unload(this->m_pSegment, (IUnknown *)this->m_pEmbeddedAudioPath);
		else
			hr = this->m_pSegment->lpVtbl->Unload(this->m_pSegment, (IUnknown *)this->m_pPerformance);
	}
	else
	{
		hr = this->m_pSegment->lpVtbl->Unload(this->m_pSegment, (IUnknown *)pAudioPath);
	}

	if (SUCCEEDED(hr))
		this->m_bDownloaded = FALSE;

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentIsPlaying
 \date		Created  on Sun Dec  4 19:03:26 2016
 \date		Modified on Sun Dec  4 19:03:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL CMusicSegmentIsPlaying(CMusicSegment *this)
{
	if (this->m_pSegment == NULL || this->m_pPerformance == NULL)
		return CO_E_NOTINITIALIZED;

	return (this->m_pPerformance->lpVtbl->IsPlaying(this->m_pPerformance, (IDirectMusicSegment *)this->m_pSegment, NULL) == S_OK);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentStop
 \date		Created  on Sun Dec  4 19:03:33 2016
 \date		Modified on Sun Dec  4 19:03:33 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentStop(CMusicSegment *this, DWORD dwFlags)
{
	if (this->m_pSegment == NULL || this->m_pPerformance == NULL)
		return CO_E_NOTINITIALIZED;

	return this->m_pPerformance->lpVtbl->Stop(this->m_pPerformance, (IDirectMusicSegment *)this->m_pSegment, NULL, 0, dwFlags);;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentSetRepeats
 \date		Created  on Sun Dec  4 19:03:40 2016
 \date		Modified on Sun Dec  4 19:03:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentSetRepeats(CMusicSegment *this, DWORD dwRepeats)
{
	if (this->m_pSegment == NULL)
		return CO_E_NOTINITIALIZED;

	return this->m_pSegment->lpVtbl->SetRepeats(this->m_pSegment, dwRepeats);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicSegmentGetStyle
 \date		Created  on Sun Dec  4 19:04:08 2016
 \date		Modified on Sun Dec  4 19:04:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicSegmentGetStyle(CMusicSegment *this, IDirectMusicStyle8 **ppStyle, DWORD dwStyleIndex)
{
	// Get the Style from the Segment by calling the Segment's GetData() with
	// the data type GUID_StyleTrackStyle. 0xffffffff indicates to look at
	// tracks in all TrackGroups in the segment. The first 0 indicates to
	// retrieve the Style from the first Track  in the indicated TrackGroup.
	// The second 0 indicates to retrieve the Style from the beginning of the
	// segment, i.e. time 0 in Segment time. If this Segment was loaded from a
	// section file, there is only one Style and it is at time 0.
	return this->m_pSegment->lpVtbl->GetParam(this->m_pSegment, &GUID_IDirectMusicStyle, 0xffffffff, dwStyleIndex, 0, NULL, (VOID *)ppStyle);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicScriptNew
 \date		Created  on Sun Dec  4 19:04:17 2016
 \date		Modified on Sun Dec  4 19:04:17 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CMusicScript *CMusicScriptNew(IDirectMusicPerformance8 * pPerformance, IDirectMusicLoader8 * pLoader, IDirectMusicScript8 * pScript)
{
	CMusicScript *this = malloc(sizeof(CMusicScript));
	if (!this)
		return NULL;

	this->m_pPerformance = pPerformance;
	this->m_pLoader      = pLoader;
	this->m_pScript      = pScript;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicScriptDestroy
 \date		Created  on Sun Dec  4 19:04:25 2016
 \date		Modified on Sun Dec  4 19:04:25 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CMusicScriptDestroy(CMusicScript *this)
{
	if (this->m_pLoader)
	{
		// Tell the loader that this object should now be released
		this->m_pLoader->lpVtbl->ReleaseObjectByUnknown(this->m_pLoader, (IUnknown *)this->m_pScript);
		this->m_pLoader = NULL;
	}

	SAFE_RELEASE(this->m_pScript);
	this->m_pPerformance = NULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicScriptCallRoutine
 \details	Calls a routine in the script
 \date		Created  on Sun Dec  4 19:04:38 2016
 \date		Modified on Sun Dec  4 19:04:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicScriptCallRoutine(CMusicScript *this, TCHAR *strRoutine)
{
	// DMusic only takes wide strings
	WCHAR wstrRoutine[MAX_PATH];
	DXUtil_ConvertGenericStringToWide(wstrRoutine, strRoutine, -1);

	return this->m_pScript->lpVtbl->CallRoutine(this->m_pScript, wstrRoutine, NULL);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicScriptSetVariableNumber
 \details	Sets the value of a variable in the script
 \date		Created  on Sun Dec  4 19:04:52 2016
 \date		Modified on Sun Dec  4 19:04:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicScriptSetVariableNumber(CMusicScript *this, TCHAR *strVariable, LONG lValue)
{
	// DMusic only takes wide strings
	WCHAR wstrVariable[MAX_PATH];
	DXUtil_ConvertGenericStringToWide(wstrVariable, strVariable, -1);

	return this->m_pScript->lpVtbl->SetVariableNumber(this->m_pScript, wstrVariable, lValue, NULL);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMusicScriptGetVariableNumber
 \details	Gets the value of a variable in the script
 \date		Created  on Sun Dec  4 19:05:05 2016
 \date		Modified on Sun Dec  4 19:05:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMusicScriptGetVariableNumber(CMusicScript *this, TCHAR *strVariable, LONG *plValue)
{
	// DMusic only takes wide strings
	WCHAR wstrVariable[MAX_PATH];
	DXUtil_ConvertGenericStringToWide(wstrVariable, strVariable, -1);

	return this->m_pScript->lpVtbl->GetVariableNumber(this->m_pScript, wstrVariable, plValue, NULL);
}

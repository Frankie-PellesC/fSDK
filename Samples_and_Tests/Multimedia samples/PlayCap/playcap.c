/*+@@file@@----------------------------------------------------------------*//*!
 \file		playcap.c
 \par Description 
            DirectShow sample code.
            A very basic application using video capture devices.
            It creates a window and uses the first available capture device 
            to render and preview video capture data.
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec 11 20:38:09 2016
 \date		Modified on Sun Dec 11 20:38:09 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#define _WIN32_WINNT 0x0500

#include <windows.h>
#include <dshow.h>
#include <stdio.h>
#include <strsafe.h>

#include "PlayCap.h"

/*
 *	An application can advertise the existence of its filter graph
 *	by registering the graph with a global Running Object Table (ROT).
 *	The GraphEdit application can detect and remotely view the running
 *	filter graph, allowing you to 'spy' on the graph with GraphEdit.
 *
 *	To enable registration in this sample, define REGISTER_FILTERGRAPH.
 */
#define REGISTER_FILTERGRAPH


//
// Global data
//
HWND                   ghApp             = 0;
DWORD                  g_dwGraphRegister = 0;
IVideoWindow          *g_pVW             = NULL;
IMediaControl         *g_pMC             = NULL;
IMediaEventEx         *g_pME             = NULL;
IGraphBuilder         *g_pGraph          = NULL;
ICaptureGraphBuilder2 *g_pCapture        = NULL;
PLAYSTATE g_psCurrent                    = Stopped;


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CaptureVideo
 \date		Created  on Sun Dec 11 20:41:26 2016
 \date		Modified on Sun Dec 11 20:41:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CaptureVideo(void)
{
    HRESULT hr;
    IBaseFilter *pSrcFilter=NULL;

    // Get DirectShow interfaces
    hr = GetInterfaces();
    if (FAILED(hr))
    {
        Msg(TEXT("Failed to get video interfaces!  hr=0x%x"), hr);
        return hr;
    }

    // Attach the filter graph to the capture graph
    hr = g_pCapture->lpVtbl->SetFiltergraph(g_pCapture, g_pGraph);
    if (FAILED(hr))
    {
        Msg(TEXT("Failed to set capture filter graph!  hr=0x%x"), hr);
        return hr;
    }

    // Use the system device enumerator and class enumerator to find
    // a video capture/preview device, such as a desktop USB video camera.
    hr = FindCaptureDevice(&pSrcFilter);
    if (FAILED(hr))
    {
        // Don't display a message because FindCaptureDevice will handle it
        return hr;
    }
   
    // Add Capture filter to our graph.
    hr = g_pGraph->lpVtbl->AddFilter(g_pGraph, pSrcFilter, L"Video Capture");
    if (FAILED(hr))
    {
        Msg(TEXT("Couldn't add the capture filter to the graph!  hr=0x%x\r\n\r\n") 
            TEXT("If you have a working video capture device, please make sure\r\n")
            TEXT("that it is connected and is not being used by another application.\r\n\r\n")
            TEXT("The sample will now close."), hr);
        pSrcFilter->lpVtbl->Release(pSrcFilter);
        return hr;
    }

    // Render the preview pin on the video capture filter
    // Use this instead of g_pGraph->RenderFile
    hr = g_pCapture->lpVtbl->RenderStream (g_pCapture, &PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video,
                                   (LPUNKNOWN)pSrcFilter, NULL, NULL);
    if (FAILED(hr))
    {
        Msg(TEXT("Couldn't render the video capture stream.  hr=0x%x\r\n")
            TEXT("The capture device may already be in use by another application.\r\n\r\n")
            TEXT("The sample will now close."), hr);
        pSrcFilter->lpVtbl->Release(pSrcFilter);
        return hr;
    }

    // Now that the filter has been added to the graph and we have
    // rendered its stream, we can release this reference to the filter.
    pSrcFilter->lpVtbl->Release(pSrcFilter);

    // Set video window style and position
    hr = SetupVideoWindow();
    if (FAILED(hr))
    {
        Msg(TEXT("Couldn't initialize video window!  hr=0x%x"), hr);
        return hr;
    }

#ifdef REGISTER_FILTERGRAPH
    // Add our graph to the running object table, which will allow
    // the GraphEdit application to "spy" on our graph
    hr = AddGraphToRot((LPUNKNOWN)g_pGraph, &g_dwGraphRegister);
    if (FAILED(hr))
    {
        Msg(TEXT("Failed to register filter graph with ROT!  hr=0x%x"), hr);
        g_dwGraphRegister = 0;
    }
#endif

    // Start previewing video data
    hr = g_pMC->lpVtbl->Run(g_pMC);
    if (FAILED(hr))
    {
        Msg(TEXT("Couldn't run the graph!  hr=0x%x"), hr);
        return hr;
    }

    // Remember current state
    g_psCurrent = Running;
        
    return S_OK;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FindCaptureDevice
 \date		Created  on Sun Dec 11 20:41:37 2016
 \date		Modified on Sun Dec 11 20:41:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FindCaptureDevice(IBaseFilter ** ppSrcFilter)
{
    HRESULT hr = S_OK;
    IBaseFilter * pSrc = NULL;
    IMoniker* pMoniker =NULL;
    ICreateDevEnum *pDevEnum =NULL;
    IEnumMoniker *pClassEnum = NULL;

    if (!ppSrcFilter)
	{
        return E_POINTER;
	}
   
    // Create the system device enumerator
    hr = CoCreateInstance (&CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC,
                           &IID_ICreateDevEnum, (void **) &pDevEnum);
    if (FAILED(hr))
    {
        Msg(TEXT("Couldn't create system enumerator!  hr=0x%x"), hr);
    }

    // Create an enumerator for the video capture devices

	if (SUCCEEDED(hr))
	{
	    hr = pDevEnum->lpVtbl->CreateClassEnumerator (pDevEnum, &CLSID_VideoInputDeviceCategory, &pClassEnum, 0);
		if (FAILED(hr))
		{
			Msg(TEXT("Couldn't create class enumerator!  hr=0x%x"), hr);
	    }
	}

	if (SUCCEEDED(hr))
	{
		// If there are no enumerators for the requested type, then 
		// CreateClassEnumerator will succeed, but pClassEnum will be NULL.
		if (pClassEnum == NULL)
		{
			MessageBox(ghApp,TEXT("No video capture device was detected.\r\n\r\n")
				TEXT("This sample requires a video capture device, such as a USB WebCam,\r\n")
				TEXT("to be installed and working properly.  The sample will now close."),
				TEXT("No Video Capture Hardware"), MB_OK | MB_ICONINFORMATION);
			hr = E_FAIL;
		}
	}

    // Use the first video capture device on the device list.
    // Note that if the Next() call succeeds but there are no monikers,
    // it will return S_FALSE (which is not a failure).  Therefore, we
    // check that the return code is S_OK instead of using SUCCEEDED() macro.

	if (SUCCEEDED(hr))
	{
		hr = pClassEnum->lpVtbl->Next (pClassEnum, 1, &pMoniker, NULL);
		if (hr == S_FALSE)
		{
	        Msg(TEXT("Unable to access video capture device!"));   
			hr = E_FAIL;
		}
	}

	if (SUCCEEDED(hr))
    {
        // Bind Moniker to a filter object
        hr = pMoniker->lpVtbl->BindToObject(pMoniker, 0, 0, &IID_IBaseFilter, (void**)&pSrc);
        if (FAILED(hr))
        {
            Msg(TEXT("Couldn't bind moniker to filter object!  hr=0x%x"), hr);
        }
    }

    // Copy the found filter pointer to the output parameter.
	if (SUCCEEDED(hr))
	{
	    *ppSrcFilter = pSrc;
		(*ppSrcFilter)->lpVtbl->AddRef(*ppSrcFilter);
	}

	SAFE_RELEASE(pSrc);
    SAFE_RELEASE(pMoniker);
    SAFE_RELEASE(pDevEnum);
    SAFE_RELEASE(pClassEnum);

    return hr;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetInterfaces
 \date		Created  on Sun Dec 11 20:42:05 2016
 \date		Modified on Sun Dec 11 20:42:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT GetInterfaces(void)
{
    HRESULT hr;

    // Create the filter graph
    hr = CoCreateInstance (&CLSID_FilterGraph, NULL, CLSCTX_INPROC,
                           &IID_IGraphBuilder, (void **) &g_pGraph);
    if (FAILED(hr))
        return hr;

    // Create the capture graph builder
    hr = CoCreateInstance (&CLSID_CaptureGraphBuilder2 , NULL, CLSCTX_INPROC,
                           &IID_ICaptureGraphBuilder2, (void **) &g_pCapture);
    if (FAILED(hr))
        return hr;
    
    // Obtain interfaces for media control and Video Window
    hr = g_pGraph->lpVtbl->QueryInterface(g_pGraph, &IID_IMediaControl,(LPVOID *) &g_pMC);
    if (FAILED(hr))
        return hr;

    hr = g_pGraph->lpVtbl->QueryInterface(g_pGraph, &IID_IVideoWindow, (LPVOID *) &g_pVW);
    if (FAILED(hr))
        return hr;

    hr = g_pGraph->lpVtbl->QueryInterface(g_pGraph, &IID_IMediaEventEx, (LPVOID *) &g_pME);
    if (FAILED(hr))
        return hr;

    // Set the window handle used to process graph events
    hr = g_pME->lpVtbl->SetNotifyWindow(g_pME, (OAHWND)ghApp, WM_GRAPHNOTIFY, 0);

    return hr;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CloseInterfaces
 \date		Created  on Sun Dec 11 20:42:09 2016
 \date		Modified on Sun Dec 11 20:42:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CloseInterfaces(void)
{
    // Stop previewing data
    if (g_pMC)
        g_pMC->lpVtbl->StopWhenReady(g_pMC);

    g_psCurrent = Stopped;

    // Stop receiving events
    if (g_pME)
        g_pME->lpVtbl->SetNotifyWindow(g_pME, 0L, WM_GRAPHNOTIFY, 0);

    // Relinquish ownership (IMPORTANT!) of the video window.
    // Failing to call put_Owner can lead to assert failures within
    // the video renderer, as it still assumes that it has a valid
    // parent window.
    if(g_pVW)
    {
        g_pVW->lpVtbl->put_Visible(g_pVW, OAFALSE);
        g_pVW->lpVtbl->put_Owner(g_pVW, 0L);
    }

#ifdef REGISTER_FILTERGRAPH
    // Remove filter graph from the running object table   
    if (g_dwGraphRegister)
        RemoveGraphFromRot(g_dwGraphRegister);
#endif

    // Release DirectShow interfaces
    SAFE_RELEASE(g_pMC);
    SAFE_RELEASE(g_pME);
    SAFE_RELEASE(g_pVW);
    SAFE_RELEASE(g_pGraph);
    SAFE_RELEASE(g_pCapture);
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SetupVideoWindow
 \date		Created  on Sun Dec 11 20:42:14 2016
 \date		Modified on Sun Dec 11 20:42:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT SetupVideoWindow(void)
{
    HRESULT hr;

    // Set the video window to be a child of the main window
    hr = g_pVW->lpVtbl->put_Owner(g_pVW, (OAHWND)ghApp);
    if (FAILED(hr))
        return hr;
    
    // Set video window style
    hr = g_pVW->lpVtbl->put_WindowStyle(g_pVW, WS_CHILD | WS_CLIPCHILDREN);
    if (FAILED(hr))
        return hr;

    // Use helper function to position video window in client rect 
    // of main application window
    ResizeVideoWindow();

    // Make the video window visible, now that it is properly positioned
    hr = g_pVW->lpVtbl->put_Visible(g_pVW, OATRUE);
    if (FAILED(hr))
        return hr;

    return hr;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ResizeVideoWindow
 \date		Created  on Sun Dec 11 20:42:19 2016
 \date		Modified on Sun Dec 11 20:42:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void ResizeVideoWindow(void)
{
    // Resize the video preview window to match owner window size
    if (g_pVW)
    {
        RECT rc;
        
        // Make the preview video fill our window
        GetClientRect(ghApp, &rc);
        g_pVW->lpVtbl->SetWindowPosition(g_pVW, 0, 0, rc.right, rc.bottom);
    }
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ChangePreviewState
 \date		Created  on Sun Dec 11 20:42:22 2016
 \date		Modified on Sun Dec 11 20:42:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ChangePreviewState(int nShow)
{
    HRESULT hr=S_OK;
    
    // If the media control interface isn't ready, don't call it
    if (!g_pMC)
        return S_OK;
    
    if (nShow)
    {
        if (g_psCurrent != Running)
        {
            // Start previewing video data
            hr = g_pMC->lpVtbl->Run(g_pMC);
            g_psCurrent = Running;
        }
    }
    else
    {
        // Stop previewing video data
        hr = g_pMC->lpVtbl->StopWhenReady(g_pMC);
        g_psCurrent = Stopped;
    }

    return hr;
}


#ifdef REGISTER_FILTERGRAPH

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AddGraphToRot
 \date		Created  on Sun Dec 11 20:42:27 2016
 \date		Modified on Sun Dec 11 20:42:27 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT AddGraphToRot(IUnknown *pUnkGraph, DWORD *pdwRegister) 
{
    IMoniker * pMoniker;
    IRunningObjectTable *pROT;
    WCHAR wsz[128];
    HRESULT hr;

    if (!pUnkGraph || !pdwRegister)
        return E_POINTER;

    if (FAILED(GetRunningObjectTable(0, &pROT)))
        return E_FAIL;

    hr = StringCchPrintfW(wsz, NUMELMS(wsz), L"FilterGraph %08x pid %08x\0", (DWORD_PTR)pUnkGraph, 
              GetCurrentProcessId());

    hr = CreateItemMoniker(L"!", wsz, &pMoniker);
    if (SUCCEEDED(hr)) 
    {
        // Use the ROTFLAGS_REGISTRATIONKEEPSALIVE to ensure a strong reference
        // to the object.  Using this flag will cause the object to remain
        // registered until it is explicitly revoked with the Revoke() method.
        //
        // Not using this flag means that if GraphEdit remotely connects
        // to this graph and then GraphEdit exits, this object registration 
        // will be deleted, causing future attempts by GraphEdit to fail until
        // this application is restarted or until the graph is registered again.
        hr = pROT->lpVtbl->Register(pROT, ROTFLAGS_REGISTRATIONKEEPSALIVE, pUnkGraph, 
                            pMoniker, pdwRegister);
        pMoniker->lpVtbl->Release(pMoniker);
    }

    pROT->lpVtbl->Release(pROT);
    return hr;
}


// Removes a filter graph from the Running Object Table
void RemoveGraphFromRot(DWORD pdwRegister)
{
    IRunningObjectTable *pROT;

    if (SUCCEEDED(GetRunningObjectTable(0, &pROT))) 
    {
        pROT->lpVtbl->Revoke(pROT, pdwRegister);
        pROT->lpVtbl->Release(pROT);
    }
}

#endif


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Msg
 \date		Created  on Sun Dec 11 20:42:33 2016
 \date		Modified on Sun Dec 11 20:42:33 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void Msg(TCHAR *szFormat, ...)
{
    TCHAR szBuffer[1024];  // Large buffer for long filenames or URLs
    const size_t NUMCHARS = sizeof(szBuffer) / sizeof(szBuffer[0]);
    const int    LASTCHAR = NUMCHARS - 1;

    // Format the input string
    va_list pArgs;
    va_start(pArgs, szFormat);

    // Use a bounded buffer size to prevent buffer overruns.  Limit count to
    // character size minus one to allow for a NULL terminating character.
    (void)StringCchVPrintf(szBuffer, NUMCHARS - 1, szFormat, pArgs);
    va_end(pArgs);

    // Ensure that the formatted string is NULL-terminated
    szBuffer[LASTCHAR] = TEXT('\0');

    MessageBox(NULL, szBuffer, TEXT("PlayCap Message"), MB_OK | MB_ICONERROR);
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleGraphEvent
 \date		Created  on Sun Dec 11 20:42:37 2016
 \date		Modified on Sun Dec 11 20:42:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT HandleGraphEvent(void)
{
    LONG evCode;
	LONG_PTR evParam1, evParam2;
    HRESULT hr=S_OK;

    if (!g_pME)
        return E_POINTER;

    while(SUCCEEDED(g_pME->lpVtbl->GetEvent(g_pME, &evCode, &evParam1, &evParam2, 0)))
    {
        //
        // Free event parameters to prevent memory leaks associated with
        // event parameter data.  While this application is not interested
        // in the received events, applications should always process them.
        //
        hr = g_pME->lpVtbl->FreeEventParams(g_pME, evCode, evParam1, evParam2);
        
        // Insert event processing code here, if desired
    }

    return hr;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WndMainProc
 \date		Created  on Sun Dec 11 20:42:40 2016
 \date		Modified on Sun Dec 11 20:42:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT CALLBACK WndMainProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_GRAPHNOTIFY:
            HandleGraphEvent();
            break;

        case WM_SIZE:
            ResizeVideoWindow();
            break;

        case WM_WINDOWPOSCHANGED:
            ChangePreviewState(! (IsIconic(hwnd)));
            break;

        case WM_CLOSE:            
            // Hide the main window while the graph is destroyed
            ShowWindow(ghApp, SW_HIDE);
            CloseInterfaces();  // Stop capturing and release interfaces
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    // Pass this message to the video window for notification of system changes
    if (g_pVW)
        g_pVW->lpVtbl->NotifyOwnerMessage(g_pVW, (LONG_PTR) hwnd, message, wParam, lParam);

    return DefWindowProc (hwnd , message, wParam, lParam);
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WinMain
 \date		Created  on Sun Dec 11 20:42:45 2016
 \date		Modified on Sun Dec 11 20:42:45 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hInstP, LPSTR lpCmdLine, int nCmdShow)
{
    MSG msg={0};
    WNDCLASS wc;

    // Initialize COM
    if(FAILED(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED)))
    {
        Msg(TEXT("CoInitialize Failed!\r\n"));   
        exit(1);
    } 

    // Register the window class
    ZeroMemory(&wc, sizeof wc);
    wc.lpfnWndProc   = WndMainProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = CLASSNAME;
    wc.lpszMenuName  = NULL;
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon         = NULL;
    if(!RegisterClass(&wc))
    {
        Msg(TEXT("RegisterClass Failed! Error=0x%x\r\n"), GetLastError());
        CoUninitialize();
        exit(1);
    }

    // Create the main window.  The WS_CLIPCHILDREN style is required.
    ghApp = CreateWindow(CLASSNAME, APPLICATIONNAME,
                         WS_OVERLAPPEDWINDOW | WS_CAPTION | WS_CLIPCHILDREN,
                         CW_USEDEFAULT, CW_USEDEFAULT,
                         DEFAULT_VIDEO_WIDTH, DEFAULT_VIDEO_HEIGHT,
                         0, 0, hInstance, 0);

    if(ghApp)
    {
        HRESULT hr;

        // Create DirectShow graph and start capturing video
        hr = CaptureVideo();
        if (FAILED (hr))
        {
            CloseInterfaces();
            DestroyWindow(ghApp);
        }
        else
        {
            // Don't display the main window until the DirectShow
            // preview graph has been created.  Once video data is
            // being received and processed, the window will appear
            // and immediately have useful video data to display.
            // Otherwise, it will be black until video data arrives.
            ShowWindow(ghApp, nCmdShow);
        }       

        // Main message loop
        while(GetMessage(&msg,NULL,0,0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    // Release COM
    CoUninitialize();

    return (int) msg.wParam;
}

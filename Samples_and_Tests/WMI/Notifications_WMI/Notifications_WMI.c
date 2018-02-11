/*
 *	connects to WMI on the local computer, receives an event notification, and then cleans up.
 *	The example notifies the user of an event when a new process is created. The events are received asynchronously.
 */
#include "eventsink.h"

int main(int iArgCnt, char ** argv)
{
    HRESULT hres;

	/*
	 * ===================================================================
	 * Step 1:
	 *		Initialize COM.
	 * ===================================================================
	 */

	hres =	CoInitializeEx(0, COINIT_MULTITHREADED); 
	if (FAILED(hres))
	{
		printf("Failed to initialize COM library. Error code = 0x%08x\n", hres);
		return 1;				   // Program has failed.
	}

	/*
	 * ===================================================================
	 * Step 2:
	 *		Set general COM security levels
	 * ===================================================================
	 */

	hres =	CoInitializeSecurity(
									NULL,
									-1, 						 // COM authentication
									NULL,						 // Authentication services
									NULL,						 // Reserved
									RPC_C_AUTHN_LEVEL_DEFAULT,	 // Default authentication 
									RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
									NULL,						 // Authentication info
									EOAC_NONE,					 // Additional capabilities 
									NULL						 // Reserved
								);

					  
	if (FAILED(hres))
	{
		printf("Failed to initialize security. Error code = 0x%08x\n", hres);
		CoUninitialize();
		return 1;					 // Program has failed.
	}
	
	/*
	 * ===================================================================
	 * Step 3:
	 *		Obtain the initial locator to WMI
	 * ===================================================================
	 */

	IWbemLocator *pLoc = NULL;

	hres =  CoCreateInstance(
								&CLSID_WbemLocator, 			
								0, 
								CLSCTX_INPROC_SERVER, 
								&IID_IWbemLocator,
								(LPVOID *) &pLoc
							);
 
	if (FAILED(hres))
	{
		printf("Failed to create IWbemLocator object.\n"
			   						" Err code = 0x%08x\n", hres);
		CoUninitialize();
		return 1;				  // Program has failed.
	}


	/*
	 * ===================================================================
	 * Step 4:
	 *		Connect to WMI through the IWbemLocator::ConnectServer method
	 * ===================================================================
	 */

	IWbemServices *pSvc = NULL;
 
	/*
	 * Connect to the root\cimv2 namespace with
	 * the current user and obtain pointer pSvc
	 * to make IWbemServices calls.
	 */
	BSTR bstr = SysAllocString(L"ROOT\\CIMV2");
	hres      = pLoc->lpVtbl->ConnectServer (
						 pLoc,
						 bstr,		// Object path of WMI namespace
						 NULL,		// User name. NULL = current user
						 NULL,		// User password. NULL = current
						 0,			// Locale. NULL indicates current
						 0,			// Security flags.
						 0,			// Authority (for example, Kerberos)
						 0,			// Context object 
						 &pSvc		// pointer to IWbemServices proxy
					);
	SysFreeString(bstr);

	if (FAILED(hres))
	{
		printf("Could not connect. Error code = 0x%08x\n", hres);
		pLoc->lpVtbl->Release(pLoc);	 
		CoUninitialize();
		return 1;				 // Program has failed.
	}

	printf("Connected to ROOT\\CIMV2 WMI namespace\n");


	/*
	 * ===================================================================
	 * Step 5:
	 *		Set security levels on the proxy
	 * ===================================================================
	 */

	hres = CoSetProxyBlanket(
	   (LPUNKNOWN)pSvc,				// Indicates the proxy to set
	   RPC_C_AUTHN_WINNT,			// RPC_C_AUTHN_xxx
	   RPC_C_AUTHZ_NONE,			// RPC_C_AUTHZ_xxx
	   NULL,						// Server principal name 
	   RPC_C_AUTHN_LEVEL_CALL,		// RPC_C_AUTHN_LEVEL_xxx 
	   RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
	   NULL,						// client identity
	   EOAC_NONE					// proxy capabilities 
	);

	if (FAILED(hres))
	{
		printf("Could not set proxy blanket. Error code = 0x%08x\n", hres);
		pSvc->lpVtbl->Release(pSvc);
		pLoc->lpVtbl->Release(pLoc);	 
		CoUninitialize();
		return 1;				// Program has failed.
	}

	/*
	 * ===================================================================
	 * Step 5:
	 *		Receive event notifications
	 * ===================================================================
	 */

    // Use an unsecured apartment for security
    IUnsecuredApartment* pUnsecApp = NULL;

    hres = CoCreateInstance(&CLSID_UnsecuredApartment, NULL, 
								CLSCTX_LOCAL_SERVER, &IID_IUnsecuredApartment, (void**)&pUnsecApp);
 
    IWbemObjectSink *pSink = CreateEventSink();
	if (!pSink)
	{
		printf("Could not create a sink\n", hres);
		pSvc->lpVtbl->Release(pSvc);
		pLoc->lpVtbl->Release(pLoc);	 
		CoUninitialize();
		return 1;				// Program has failed.
	}

    pSink->lpVtbl->AddRef(pSink);

    IUnknown* pStubUnk = NULL; 
    pUnsecApp->lpVtbl->CreateObjectStub(pUnsecApp, (LPUNKNOWN)pSink, &pStubUnk);

    IWbemObjectSink* pStubSink = NULL;
    pStubUnk->lpVtbl->QueryInterface(pStubUnk, &IID_IWbemObjectSink, (void **) &pStubSink);

    // The ExecNotificationQueryAsync method will call
    // The EventQuery::Indicate method when an event occurs
	BSTR bstrLanguage = SysAllocString(L"WQL");
	BSTR bstrQuery    = SysAllocString(L"SELECT * FROM __InstanceCreationEvent WITHIN 1 WHERE TargetInstance ISA 'Win32_Process'");
    hres = pSvc->lpVtbl->ExecNotificationQueryAsync
						(
							pSvc,
					        bstrLanguage, 
					        bstrQuery, 
					        WBEM_FLAG_SEND_STATUS, 
					        NULL, 
					        pStubSink
						);
	SysFreeString(bstrLanguage);
	SysFreeString(bstrQuery);

    // Check for errors.
    if (FAILED(hres))
    {
        printf("ExecNotificationQueryAsync failed with = 0x%X\n", hres);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        pUnsecApp->lpVtbl->Release(pUnsecApp);
        pStubUnk->lpVtbl->Release(pStubUnk);
        pSink->lpVtbl->Release(pSink);
        pStubSink->lpVtbl->Release(pStubSink);
        CoUninitialize();    
        return 1;
    }

    // Wait for the event
    Sleep(10000);
         
    hres = pSvc->lpVtbl->CancelAsyncCall(pSvc, pStubSink);

    // Cleanup
    // ========

    pSvc->lpVtbl->Release(pSvc);
    pLoc->lpVtbl->Release(pLoc);
    pUnsecApp->lpVtbl->Release(pUnsecApp);
    pStubUnk->lpVtbl->Release(pStubUnk);
    pSink->lpVtbl->Release(pSink);
    pStubSink->lpVtbl->Release(pStubSink);
    CoUninitialize();

	printf("Press any key ...");
	getchar();

    return 0;   // Program successfully completed.
 
}

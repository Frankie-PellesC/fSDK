/*
 *	This code connects to WMI on the local computer, gets data asynchronously, and then cleans up.
 *	This example gets the name of the operating system on the local computer and displays it.
 */
#include <stdio.h>
#include "querysink.h"


int main(int argc, char **argv)
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
	 *		Use the IWbemServices pointer to make requests of WMI
	 *		For example, get the name of the operating system.
	 *		The IWbemService::ExecQueryAsync method will call
	 *		the QuerySink::Indicate method when it receives a result
	 *		and the QuerySink::Indicate method will display the OS name
	 * ===================================================================
	 */

    IWbemObjectSink* pResponseSink = CreateQuerySink();
    pResponseSink->lpVtbl->AddRef(pResponseSink);
	BSTR bstrLanguage = SysAllocString(L"WQL");
	BSTR bstrQuery    = SysAllocString(L"SELECT * FROM Win32_OperatingSystem");
    hres = pSvc->lpVtbl->ExecQueryAsync
							(
								pSvc,
								bstrLanguage, 
                                bstrQuery,
                                WBEM_FLAG_BIDIRECTIONAL, 
                                NULL,
                                pResponseSink
							);
	SysFreeString(bstrLanguage);
	SysFreeString(bstrQuery);
    
    if (FAILED(hres))
    {
        printf("Query for operating system name failed.\n Error code = 0x%08x\n", hres);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        pResponseSink->lpVtbl->Release(pResponseSink);
        CoUninitialize();
        return 1;               // Program has failed.
    }

	/*
	 * ===================================================================
	 * Step 5:
	 *		Wait to get the data from the query in step 6
	 * ===================================================================
	 */
    Sleep(500);
    pSvc->lpVtbl->CancelAsyncCall(pSvc, pResponseSink);

    // Cleanup
    // ========
    pSvc->lpVtbl->Release(pSvc);
    pLoc->lpVtbl->Release(pLoc);
    CoUninitialize();

    return 0;   // Program successfully completed.
}

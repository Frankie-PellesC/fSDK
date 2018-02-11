/*
 *	This code connects to WMI on the local computer, calls a provider method, and then cleans up.
 *	The Win32_Process::Create method is used to start Notepad.exe in a new process.
 */
#define _WIN32_DCOM
#include <stdio.h>
#include <Wbemidl.h>

#pragma comment(lib, "wbemuuid.lib")

int __cdecl main(int argc, char **argv)
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

    // Step 6: --------------------------------------------------
    // Use the IWbemServices pointer to make requests of WMI ----

    // set up to call the Win32_Process::Create method
    BSTR MethodName = SysAllocString(L"Create");
    BSTR ClassName  = SysAllocString(L"Win32_Process");

    IWbemClassObject* pClass = NULL;
    hres = pSvc->lpVtbl->GetObject(pSvc, ClassName, 0, NULL, &pClass, NULL);

    IWbemClassObject* pInParamsDefinition = NULL;
    hres = pClass->lpVtbl->GetMethod(pClass, MethodName, 0, &pInParamsDefinition, NULL);

    IWbemClassObject* pClassInstance = NULL;
    hres = pInParamsDefinition->lpVtbl->SpawnInstance(pInParamsDefinition, 0, &pClassInstance);

    // Create the values for the in parameters
    VARIANT varCommand;
    varCommand.vt      = VT_BSTR;
    varCommand.bstrVal = SysAllocString(L"notepad.exe");

    // Store the value for the in parameters
    hres = pClassInstance->lpVtbl->Put(pClassInstance, L"CommandLine", 0, &varCommand, 0);
    printf("The command is: %ls\n", varCommand.bstrVal);

    // Execute Method
    IWbemClassObject* pOutParams = NULL;
    hres = pSvc->lpVtbl->ExecMethod(pSvc, ClassName, MethodName, 0, NULL, pClassInstance, &pOutParams, NULL);

    if (FAILED(hres))
    {
        printf("Could not execute method. Error code = 0x%08x\n", hres);
        VariantClear(&varCommand);
        SysFreeString(ClassName);
        SysFreeString(MethodName);
        pClass->lpVtbl->Release(pClass);
        pClassInstance->lpVtbl->Release(pClassInstance);
        pInParamsDefinition->lpVtbl->Release(pInParamsDefinition);
        pOutParams->lpVtbl->Release(pOutParams);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;               // Program has failed.
    }

    // To see what the method returned,
    // use the following code.  The return value will
    // be in &varReturnValue
    VARIANT varReturnValue;
	BSTR bstrReturnValue = SysAllocString(L"ReturnValue");
    hres = pOutParams->lpVtbl->Get(pOutParams, bstrReturnValue, 0, &varReturnValue, NULL, 0);
	SysFreeString(bstrReturnValue);


    // Clean up
    //--------------------------
    VariantClear(&varCommand);
    VariantClear(&varReturnValue);
    SysFreeString(ClassName);
    SysFreeString(MethodName);
    pClass->lpVtbl->Release(pClass);
    pClassInstance->lpVtbl->Release(pClassInstance);
    pInParamsDefinition->lpVtbl->Release(pInParamsDefinition);
    pOutParams->lpVtbl->Release(pOutParams);
    pLoc->lpVtbl->Release(pLoc);
    pSvc->lpVtbl->Release(pSvc);
    CoUninitialize();
    return 0;
}

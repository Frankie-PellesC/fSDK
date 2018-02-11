#define _WIN32_DCOM
#include <stdio.h>
#include <Wbemidl.h>
# pragma comment(lib, "wbemuuid.lib")

int main(int argc, char* argv[])
{
    BSTR strNetworkResource;
    /*
	 * To use a WMI remote connection set localconn to false and
	 * configure the values of the pszName, pszPwd and the name
	 * of the remote machine in strNetworkResource.
	 */
    BOOL localconn = TRUE;  
    strNetworkResource = localconn ?  L"\\\\.\\root\\CIMV2" : L"\\\\remote--machine\\root\\CIMV2";

    // Initialize COM. ------------------------------------------

    HRESULT hres;
    hres =  CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hres))
    {
        fprintf(stderr, "Failed to initialize COM library. Error code = 0x%08x\n", hres);
        return 1;                  // Program has failed.
    }

    // Set general COM security levels --------------------------


        hres =  CoInitializeSecurity(
            NULL,
            -1,                          // COM authentication
            NULL,                        // Authentication services
            NULL,                        // Reserved
            RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication
            RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation
            NULL,                        // Authentication info
            EOAC_NONE,                   // Additional capabilities
            NULL                         // Reserved
            );


    if (FAILED(hres))
    {
        fprintf(stderr, "Failed to initialize security. Error code = 0x%08x\n", hres);
         CoUninitialize();
        return 1;                    // Program has failed.
    }

    // Obtain the initial locator to WMI -------------------------

    IWbemLocator *pLoc = NULL;
    hres = CoCreateInstance(&CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, &IID_IWbemLocator, (LPVOID *) &pLoc);

    if (FAILED(hres))
    {
        fprintf(stderr, "Failed to create IWbemLocator object.\n Err code = 0x%08x\n", hres);
        CoUninitialize();       
        return 1;                 // Program has failed.
    }

    // Connect to WMI through the IWbemLocator::ConnectServer method

    IWbemServices *pSvc = NULL;


	BSTR bstrNetworkResource = SysAllocString(strNetworkResource);

        hres = pLoc->lpVtbl->ConnectServer(
			 pLoc,
             bstrNetworkResource,      // Object path of WMI namespace
             NULL,                    // User name. NULL = current user
             NULL,                    // User password. NULL = current
             0,                       // Locale. NULL indicates current
             0,                    // Security flags.
             0,                       // Authority (e.g. Kerberos)
             0,                       // Context object
             &pSvc                    // pointer to IWbemServices proxy
             );

	SysFreeString(bstrNetworkResource);

    if (FAILED(hres))
    {
        fprintf(stderr, "Could not connect. Error code = 0x%08x\n", hres);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;                // Program has failed.
    }

    fprintf(stderr, "Connected to root\\CIMV2 WMI namespace\n");

    // Set security levels on the proxy -------------------------

        hres = CoSetProxyBlanket(
           (LPUNKNOWN)pSvc,             // Indicates the proxy to set
           RPC_C_AUTHN_WINNT,           // RPC_C_AUTHN_xxx
           RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
           NULL,                        // Server principal name
           RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx
           RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
           NULL,                        // client identity
           EOAC_NONE                    // proxy capabilities
        );


    if (FAILED(hres))
    {
        fprintf(stderr, "Could not set proxy blanket. Error code = 0x08x\n", hres);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;               // Program has failed.
    }

    // Use the IWbemServices pointer to make requests of WMI ----
    IWbemClassObject* pClass = NULL;
    hres = pSvc->lpVtbl->GetObject(pSvc, L"Win32_Process", 0, NULL, &pClass, NULL);

    if (FAILED(hres))
    {
        fprintf(stderr, "GetObject failed\nError code = 0x%08x\n", hres);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;               // Program has failed.
    }

    SAFEARRAY *psaNames = NULL;
    hres = pClass->lpVtbl->GetNames(
		pClass,
        NULL, 
        WBEM_FLAG_ALWAYS | WBEM_FLAG_NONSYSTEM_ONLY, 
        NULL, 
        &psaNames);


    if (FAILED(hres))
    {
        fprintf(stderr, "GetNames failed\nError code = 0x%08x\n", hres);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;               // Program has failed.
    }


   // Get the number of properties.
   long lLower, lUpper; 
   BSTR PropName = NULL;
   SafeArrayGetLBound(psaNames, 1, &lLower);
   SafeArrayGetUBound(psaNames, 1, &lUpper);

        for (long i = lLower; i <= lUpper; i++) 
        {
            // Get this property.
            hres = SafeArrayGetElement(
                psaNames, 
                &i, 
                &PropName);

                fprintf(stderr, "%4d) \"%ls\"\n", i-lLower+1, PropName);
                SysFreeString(PropName);
        }

    SafeArrayDestroy(psaNames);

    pSvc->lpVtbl->Release(pSvc);
    pLoc->lpVtbl->Release(pLoc);

    CoUninitialize();
    printf("press enter to exit");
    getchar();
    return 0;   // Program successfully completed.
}

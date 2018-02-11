/*
 * This code example create a complete WMI client application that performs COM initialization,
 * connects to WMI on the local computer, retrieves data semisynchronously, and then cleans up.
 * This example gets the name of the operating system on the local computer and displays it.
 * (See https://msdn.microsoft.com/en-us/library/aa390423(v=vs.85).aspx ).
 *
 * The following procedure is used to execute the WMI application.
 * Steps 1 through 5 contain all the steps required to set up and connect to WMI, and steps 6 and 7
 * are where data is queried and received.
 *
 * Steps:
 * =====
 *	1. Initialize COM parameters with a call to CoInitializeEx.
 *	2. Initialize COM process security by calling CoInitializeSecurity.
 *	3. Obtain the initial locator to WMI by calling CoCreateInstance.
 *	4. Obtain a pointer to IWbemServices for the root\cimv2 namespace on the local computer by calling
 *	   IWbemLocator::ConnectServer. To connect to a remote computer, see Example: Getting WMI Data from
 *	   a Remote Computer.
 *	5. Set IWbemServices proxy security so the WMI service can impersonate the client by calling
 *	   CoSetProxyBlanket.
 *	6. Use the IWbemServices pointer to make requests of WMI. This example executes a query for the name
 *	   of the operating system by calling IWbemServices::ExecQuery.
 *	   The following WQL query is one of the method arguments.
 *			SELECT * FROM Win32_OperatingSystem
 *	   The result of this query is stored in an IEnumWbemClassObject pointer. This allows the data objects
 *	   from the query to be retrieved semisynchronously with the IEnumWbemClassObject interface.
 *	7. Get and display the data from the WQL query. The IEnumWbemClassObject pointer is linked to the data
 *	   objects that the query returned, and the data objects can be retrieved with the
 *	   IEnumWbemClassObject::Next method. This method links the data objects to an IWbemClassObject pointer
 *	   that is passed into the method. Use the IWbemClassObject::Get method to get the desired information
 *	   from the data objects.
 */
#define _WIN32_DCOM
#include <stdio.h>
#include <Wbemidl.h>

#pragma comment(lib, "wbemuuid.lib")

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		PrintProperties
 \date		Created  on Sun Jan 28 22:11:19 2018
 \date		Modified on Sun Jan 28 22:11:19 2018
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT PrintProperties(IWbemClassObject *pclsObj)
{
	VARIANT vtProp;
	BSTR    bsPropName;

	HRESULT hr = pclsObj->lpVtbl->BeginEnumeration(pclsObj, 0L);
	if (FAILED(hr))
		return hr;

	while (TRUE)
	{
		CIMTYPE pvtType;

		hr = pclsObj->lpVtbl->Next(pclsObj, 0L, &bsPropName, &vtProp, &pvtType, NULL);
		if (WBEM_S_NO_MORE_DATA == hr)
		{
			pclsObj->lpVtbl->EndEnumeration(pclsObj);
			break;
		}

		printf(" %-41ls : ", bsPropName);

		switch(pvtType)
		{
			case CIM_EMPTY:
				printf("---\n");
				break;

			case CIM_STRING:
				printf("%ls\n", vtProp.bstrVal ? vtProp.bstrVal : L"");
				break;

			case CIM_DATETIME:
			{
				SYSTEMTIME SystemTime;
				VariantTimeToSystemTime(vtProp.dblVal, &SystemTime);
				printf("%02d:%02d:%02d - %2d/%2d/%4d (%f)\n", SystemTime.wHour, SystemTime.wMinute, SystemTime.wSecond, SystemTime.wDay, SystemTime.wMonth, SystemTime.wYear, vtProp.dblVal);
				break;
			}

			case CIM_BOOLEAN:
				printf("%s\n", vtProp.boolVal ? "YES" : "NO");
				break;

			case CIM_SINT8:
			case CIM_SINT16:
			case CIM_SINT32:
			case CIM_SINT64:
			{
				__int64 int64 = 0LL;
				switch(pvtType)
				{
					case CIM_SINT8:
						int64 = vtProp.cVal;
						break;
					case CIM_SINT16:
						int64 = vtProp.iVal;
						break;
					case CIM_SINT32:
						int64 = vtProp.lVal;
						break;
					case CIM_SINT64:
						int64 = vtProp.llVal;
						break;
				}
				printf("%lld\n", int64);
				break;
			}

			case CIM_UINT8:
			case CIM_UINT16:
			case CIM_UINT32:
			case CIM_UINT64:
			{
				unsigned __int64 uint64 = 0LL;
				switch(pvtType)
				{
					case CIM_UINT8:
						uint64 = vtProp.bVal;
						break;
					case CIM_UINT16:
						uint64 = vtProp.uiVal;
						break;
					case CIM_UINT32:
						uint64 = vtProp.ulVal;
						break;
					case CIM_UINT64:
						uint64 = vtProp.ullVal;
						break;
				}
				printf("%llu\n", uint64);
				break;
			}

			case CIM_REAL32:
			case CIM_REAL64:
			{
				double dbl = pvtType==CIM_REAL32 ? vtProp.fltVal : vtProp.dblVal;
				printf("%f\n", dbl);
				break;
			}

			default:
				printf("\n");
				break;
		}

		SysFreeString(bsPropName);
		VariantClear(&vtProp);
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		main
 \date		Created  on Sun Jan 28 23:38:50 2018
 \date		Modified on Sun Jan 28 23:38:50 2018
\*//*-@@fnc@@----------------------------------------------------------------*/
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

	/*
	 * ===================================================================
	 * Step 6:
	 *		Use the IWbemServices pointer to make requests of WMI ----
	 * ===================================================================
	 */

	// For example, get the name of the operating system
	IEnumWbemClassObject* pEnumerator = NULL;
	BSTR QueryLanguage = SysAllocString(L"WQL");
	BSTR Query         = SysAllocString(L"SELECT * FROM Win32_OperatingSystem");
	hres = pSvc->lpVtbl->ExecQuery(
									pSvc,
									QueryLanguage, 
									Query,
									WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY, 
									NULL,
									&pEnumerator
								  );
	SysFreeString(QueryLanguage);
	SysFreeString(Query);
	
	if (FAILED(hres))
	{
		printf("Query for operating system name failed.\n"
			  " Error code = 0x%08x\n", hres);
		pSvc->lpVtbl->Release(pSvc);
		pLoc->lpVtbl->Release(pLoc);
		CoUninitialize();
		return 1;				// Program has failed.
	}

	/*
	 * ===================================================================
	 * Step 7:
	 *		Get the data from the query in step 6 -------------------
	 * ===================================================================
	 */
 
	IWbemClassObject *pclsObj = NULL;
	ULONG             uReturn = 0;
   
	while (pEnumerator)
	{
		pEnumerator->lpVtbl->Next(pEnumerator, WBEM_INFINITE, 1, &pclsObj, &uReturn);

		if(0 == uReturn)
		{
			break;
		}

		// Print all properties of the current object
		printf("\n%-42s | VALUE\n----------------------------------------------------------------------------\n", "PROPERTY");
		PrintProperties(pclsObj);

		pclsObj->lpVtbl->Release(pclsObj);
	}

	/*
	 * ===================================================================
	 * Step 8:
	 *		Cleanup
	 * ===================================================================
	 */
	
	pSvc->lpVtbl->Release(pSvc);
	pLoc->lpVtbl->Release(pLoc);
	pEnumerator->lpVtbl->Release(pEnumerator);
	CoUninitialize();

	printf("\nPress any key ...");
	getchar();

	return 0;	// Program successfully completed.
 
}

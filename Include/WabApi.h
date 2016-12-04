/*+@@file@@----------------------------------------------------------------*//*!
 \file		WabApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 18 23:56:50 2016
 \date		Modified on Sun Sep 18 23:56:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WABAPI_H_
#define _WABAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _WABACTIONITEM * LPWABACTIONITEM;
#define CBIWABOBJECT sizeof(IWABOBJECT)
#define WAB_IWABOBJECT_METHODS(IPURE)                       \
MAPIMETHOD(GetLastError) (THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR * lppMAPIError); \
MAPIMETHOD(AllocateBuffer) (THIS_ ULONG cbSize, LPVOID * lppBuffer); \
MAPIMETHOD(AllocateMore) (THIS_ ULONG cbSize, LPVOID lpObject, LPVOID * lppBuffer); \
MAPIMETHOD(FreeBuffer) (THIS_ LPVOID lpBuffer); \
MAPIMETHOD(Backup) (THIS_ LPSTR lpFileName); \
MAPIMETHOD(Import) (THIS_ LPSTR lpWIP); \
MAPIMETHOD(Find) (THIS_ LPADRBOOK lpIAB, HWND hWnd); \
MAPIMETHOD(VCardDisplay) (THIS_ LPADRBOOK lpIAB, HWND hWnd, LPSTR lpszFileName); \
MAPIMETHOD(LDAPUrl) (THIS_ LPADRBOOK lpIAB, HWND hWnd, ULONG ulFlags, LPSTR lpszURL, LPMAILUSER * lppMailUser); \
MAPIMETHOD(VCardCreate) (THIS_ LPADRBOOK lpIAB, ULONG ulFlags, LPSTR lpszVCard, LPMAILUSER lpMailUser); \
MAPIMETHOD(VCardRetrieve) (THIS_ LPADRBOOK lpIAB, ULONG ulFlags, LPSTR lpszVCard, LPMAILUSER * lppMailUser); \
MAPIMETHOD(GetMe) (THIS_ LPADRBOOK lpIAB, ULONG ulFlags, DWORD * lpdwAction, SBinary * lpsbEID, HWND hwnd); \
MAPIMETHOD(SetMe) (THIS_ LPADRBOOK lpIAB, ULONG ulFlags, SBinary sbEID, HWND hwnd);
#undef           INTERFACE
#define          INTERFACE      IWABObject
DECLARE_MAPI_INTERFACE_(IWABObject, IUnknown)
{
        BEGIN_INTERFACE
        MAPI_IUNKNOWN_METHODS(PURE)
        WAB_IWABOBJECT_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IWABObject, LPWABOBJECT);
#undef  INTERFACE
#define INTERFACE       struct _IWABOBJECT
#undef  METHOD_PREFIX
#define METHOD_PREFIX   IWABOBJECT_
#undef  LPVTBL_ELEM
#define LPVTBL_ELEM             lpvtbl
#undef  MAPIMETHOD_
#define MAPIMETHOD_(type, method)       MAPIMETHOD_DECLARE(type, method, IWABOBJECT_)
MAPI_IUNKNOWN_METHODS(IMPL)
WAB_IWABOBJECT_METHODS(IMPL)
#undef  MAPIMETHOD_
#define MAPIMETHOD_(type, method)       MAPIMETHOD_TYPEDEF(type, method, IWABOBJECT_)
MAPI_IUNKNOWN_METHODS(IMPL)
WAB_IWABOBJECT_METHODS(IMPL)
#undef  MAPIMETHOD_
#define MAPIMETHOD_(type, method)       STDMETHOD_(type, method)
DECLARE_MAPI_INTERFACE(IWABOBJECT_)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(IMPL)
	WAB_IWABOBJECT_METHODS(IMPL)
};
#define WABOBJECT_LDAPURL_RETURN_MAILUSER   0x00000001
#define WABOBJECT_ME_NEW                    0x00000001
#define WABOBJECT_ME_NOCREATE               0x00000002
#define WAB_VCARD_FILE                      0x00000000
#define WAB_VCARD_STREAM                    0x00000001
typedef struct _tagWAB_PARAM
{
    ULONG   cbSize;
    HWND    hwnd;
    LPSTR   szFileName;
    ULONG   ulFlags;
    GUID    guidPSExt;
} WAB_PARAM, * LPWAB_PARAM;
#define WAB_USE_OE_SENDMAIL     0x00000001
#define WAB_ENABLE_PROFILES     0x00400000
STDMETHODIMP WABOpen(LPADRBOOK *lppAdrBook, LPWABOBJECT *lppWABObject, LPWAB_PARAM lpWP, DWORD Reserved2);
typedef HRESULT(STDMETHODCALLTYPE WABOPEN) (LPADRBOOK FAR *lppAdrBook, LPWABOBJECT FAR *lppWABObject, LPWAB_PARAM lpWP, DWORD Reserved2);
typedef WABOPEN FAR *LPWABOPEN;
STDMETHODIMP WABOpenEx(LPADRBOOK *lppAdrBook, LPWABOBJECT *lppWABObject, LPWAB_PARAM lpWP, DWORD Reserved, ALLOCATEBUFFER *fnAllocateBuffer, ALLOCATEMORE *fnAllocateMore, FREEBUFFER *fnFreeBuffer);
typedef HRESULT(STDMETHODCALLTYPE WABOPENEX) (LPADRBOOK FAR *lppAdrBook, LPWABOBJECT FAR *lppWABObject, LPWAB_PARAM lpWP, DWORD Reserved, ALLOCATEBUFFER *fnAllocateBuffer, ALLOCATEMORE *fnAllocateMore, FREEBUFFER *fnFreeBuffer);
typedef WABOPENEX FAR * LPWABOPENEX;
typedef struct _WABIMPORTPARAM
{
    ULONG cbSize;
    LPADRBOOK lpAdrBook;
    HWND hWnd;
    ULONG ulFlags;
    LPSTR lpszFileName;
} WABIMPORTPARAM, FAR * LPWABIMPORTPARAM;
#define WAB_DISPLAY_LDAPURL 0x00000001
#define WAB_CONTEXT_ADRLIST 0x00000002
#define WAB_DISPLAY_ISNTDS  0x00000004
typedef struct _WABEXTDISPLAY
{
    ULONG cbSize;
    LPWABOBJECT lpWABObject;
    LPADRBOOK lpAdrBook;
    LPMAPIPROP lpPropObj;
    BOOL fReadOnly;
    BOOL fDataChanged;
    ULONG ulFlags;
    LPVOID lpv;
    LPTSTR lpsz;
} WABEXTDISPLAY, FAR * LPWABEXTDISPLAY;
#define WAB_IWABEXTINIT_METHODS(IPURE)                          \
        MAPIMETHOD(Initialize) (THIS_ LPWABEXTDISPLAY lpWABExtDisplay);
#undef           INTERFACE
#define          INTERFACE      IWABExtInit
DECLARE_MAPI_INTERFACE_(IWABExtInit, IUnknown)
{
        BEGIN_INTERFACE
        MAPI_IUNKNOWN_METHODS(PURE)
        WAB_IWABEXTINIT_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IWABExtInit, LPWABEXTINIT);
DEFINE_GUID(IID_IWABExtInit, 0xea22ebf0, 0x87a4, 0x11d1, 0x9a, 0xcf, 0x0, 0xa0, 0xc9, 0x1f, 0x9c, 0x8b);
#define WAB_DLL_NAME TEXT("WAB32.DLL")
#define WAB_DLL_PATH_KEY TEXT("Software\\Microsoft\\WAB\\DLLPath")
#endif

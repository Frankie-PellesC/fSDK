/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIHook.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 24 22:16:10 2016
 \date		Modified on Sun Jul 24 22:16:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MAPIHOOK_H
#define MAPIHOOK_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef MAPIDEFS_H
#include <mapidefs.h>
#include <mapicode.h>
#include <mapiguid.h>
#include <mapitags.h>
#endif
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
#define HOOK_DELETE         ((ULONG) 0x00000001)
#define HOOK_CANCEL         ((ULONG) 0x00000002)
#define MAPI_ISPOOLERHOOK_METHODS(IPURE)                            \
    MAPIMETHOD(InboundMsgHook)(THIS_  LPMESSAGE lpMessage, LPMAPIFOLDER lpFolder, LPMDB lpMDB, ULONG FAR *lpulFlags, ULONG FAR *lpcbEntryID, LPBYTE FAR *lppEntryID); \
    MAPIMETHOD(OutboundMsgHook)(THIS_  LPMESSAGE lpMessage, LPMAPIFOLDER lpFolder, LPMDB lpMDB, ULONG FAR *lpulFlags, ULONG FAR *lpcbEntryID,  LPBYTE FAR * lppEntryID);
#undef       INTERFACE
#define      INTERFACE  ISpoolerHook
DECLARE_MAPI_INTERFACE_(ISpoolerHook, IUnknown)
{
    BEGIN_INTERFACE 
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_ISPOOLERHOOK_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(ISpoolerHook, LPSPOOLERHOOK);
#define HOOK_INBOUND        ((ULONG) 0x00000200)
#define HOOK_OUTBOUND       ((ULONG) 0x00000400)
typedef HRESULT(STDMAPIINITCALLTYPE HPPROVIDERINIT) (LPMAPISESSION lpSession, HINSTANCE hInstance, LPALLOCATEBUFFER lpAllocateBuffer, LPALLOCATEMORE lpAllocateMore, LPFREEBUFFER lpFreeBuffer, LPMAPIUID lpSectionUID, ULONG ulFlags, LPSPOOLERHOOK FAR *lppSpoolerHook);
HPPROVIDERINIT HPProviderInit;
#endif

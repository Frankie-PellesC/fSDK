/*+@@file@@----------------------------------------------------------------*//*!
 \file		BaseTyps.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 14:03:28 2016
 \date		Modified on Fri Jul  1 14:03:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined( _BASETYPS_H_ )
#define _BASETYPS_H_
#if __POCC__ >= 500
#pragma once
#endif
#define extern    extern
#ifdef _WIN32
#define STDMETHODCALLTYPE       __stdcall
#define STDMETHODVCALLTYPE      __cdecl
#define STDAPICALLTYPE          __stdcall
#define STDAPIVCALLTYPE         __cdecl
#else
#define STDMETHODCALLTYPE       __export __stdcall
#define STDMETHODVCALLTYPE      __export __cdecl
#define STDAPICALLTYPE          __export __stdcall
#define STDAPIVCALLTYPE         __export __cdecl
#endif
#define STDAPI                  extern HRESULT STDAPICALLTYPE
#define STDAPI_(type)           extern type STDAPICALLTYPE
#define STDMETHODIMP            HRESULT STDMETHODCALLTYPE
#define STDMETHODIMP_(type)     type STDMETHODCALLTYPE
#define STDAPIV                 extern HRESULT STDAPIVCALLTYPE
#define STDAPIV_(type)          extern type STDAPIVCALLTYPE
#define STDMETHODIMPV           HRESULT STDMETHODVCALLTYPE
#define STDMETHODIMPV_(type)    type STDMETHODVCALLTYPE

#define interface               struct
#define STDMETHOD(method)       HRESULT (STDMETHODCALLTYPE * method)
#define STDMETHOD_(type,method) type (STDMETHODCALLTYPE * method)
#define STDMETHODV(method)       HRESULT (STDMETHODVCALLTYPE * method)
#define STDMETHODV_(type,method) type (STDMETHODVCALLTYPE * method)
#define IFACEMETHOD(method)         __override STDMETHOD(method)
#define IFACEMETHOD_(type,method)   __override STDMETHOD_(type,method)
#define IFACEMETHODV(method)        __override STDMETHODV(method)
#define IFACEMETHODV_(type,method)  __override STDMETHODV_(type,method)
#define PURE
#define THIS_                   INTERFACE FAR* This,
#define THIS                    INTERFACE FAR* This
#ifdef CONST_VTABLE
#define DECLARE_INTERFACE(iface)    typedef interface iface { \
                                    const struct iface##Vtbl FAR* lpVtbl; \
                                } iface; \
                                typedef const struct iface##Vtbl iface##Vtbl; \
                                const struct iface##Vtbl
#else
#define DECLARE_INTERFACE(iface)    typedef interface iface { \
                                    struct iface##Vtbl FAR* lpVtbl; \
                                } iface; \
                                typedef struct iface##Vtbl iface##Vtbl; \
                                struct iface##Vtbl
#endif
#define DECLARE_INTERFACE_(iface, baseiface)    DECLARE_INTERFACE(iface)
#include <guiddef.h>
#ifndef _ERROR_STATUS_T_DEFINED
typedef unsigned long error_status_t;
#define _ERROR_STATUS_T_DEFINED
#endif
#ifndef _WCHAR_T_DEFINED
typedef unsigned short wchar_t;
#define _WCHAR_T_DEFINED
#endif
#endif




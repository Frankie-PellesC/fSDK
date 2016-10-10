/*+@@file@@----------------------------------------------------------------*//*!
 \file		functiondiscovery.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:21:48 2016
 \date		Modified on Sun Jul 10 19:21:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __functiondiscovery_h__
#define __functiondiscovery_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __FunctionDiscovery_FWD_DEFINED__
#define __FunctionDiscovery_FWD_DEFINED__
typedef struct FunctionDiscovery FunctionDiscovery;
#endif
#ifndef __PropertyStore_FWD_DEFINED__
#define __PropertyStore_FWD_DEFINED__
typedef struct PropertyStore PropertyStore;
#endif
#ifndef __FunctionInstanceCollection_FWD_DEFINED__
#define __FunctionInstanceCollection_FWD_DEFINED__
typedef struct FunctionInstanceCollection FunctionInstanceCollection;
#endif
#ifndef __PropertyStoreCollection_FWD_DEFINED__
#define __PropertyStoreCollection_FWD_DEFINED__
typedef struct PropertyStoreCollection PropertyStoreCollection;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "FunctionDiscoveryAPI.h"
#ifndef __FctnDiscLib_LIBRARY_DEFINED__
#define __FctnDiscLib_LIBRARY_DEFINED__ 
extern const IID LIBID_FctnDiscLib;
extern const CLSID CLSID_FunctionDiscovery;
extern const CLSID CLSID_PropertyStore;
extern const CLSID CLSID_FunctionInstanceCollection;
extern const CLSID CLSID_PropertyStoreCollection;
#endif
#endif

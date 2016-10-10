/*+@@file@@----------------------------------------------------------------*//*!
 \file		IDLMULTI.H
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:21:13 2016
 \date		Modified on Sat Jul 16 20:21:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IDLMULTI_H__
#define __IDLMULTI_H__
#if __POCC__ >= 500
#pragma once
#endif
#define ENDCOCLASS  };
#ifndef __MKTYPLIB__
#define TYPEDEF(guid)   typedef
#define LOCAL_INTERFACE(guid)       [local, object, uuid(guid), pointer_default(unique)]
#define REMOTED_INTERFACE(guid)     [object, uuid(guid), pointer_default(unique)]
#define BEGINEVENTSET(es)           eventset es  {
#define ENDEVENTSET                 };
#define COCLASS(name, dispint, events)  cotype name { dispinterface dispint; eventset events;
#else
#define TYPEDEF(guid) typedef [uuid(guid)]
#define cpp_quote(string)
#define const
#define LOCAL_INTERFACE(guid)    [uuid(guid), odl]
#define REMOTED_INTERFACE(guid)  [uuid(guid), odl]
#define BEGINEVENTSET(es)        dispinterface es { properties: methods:
#define ENDEVENTSET              };
#define COCLASS(name, dispint, events)  coclass name {dispinterface dispint; [source,] dispinterface events;
#endif
#endif

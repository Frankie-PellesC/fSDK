/*+@@file@@----------------------------------------------------------------*//*!
 \file		colldispid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 20:04:59 2016
 \date		Modified on Sun Jul  3 20:04:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __COLLDISPID_H_
#define __COLLDISPID_H_
#if __POCC__ >= 500
#pragma once
#endif
#error "C++ Only"
#ifndef DISPID_LISTITEM
#define DISPID_LISTITEM     0
#endif
#ifndef DISPID_LISTCOUNT
#define DISPID_LISTCOUNT    (-531)
#endif
#ifndef DISPID_COLLCOUNT
#define DISPID_COLLCOUNT    (-530)
#endif
#ifndef DISPID_NEWENUM
#define DISPID_NEWENUM      (-4)
#endif
#define COLLECTION_METHODS( type, strHelp ) \
        [propget, id(DISPID_LISTITEM), helpstring( strHelp )] HRESULT \
    Item([in] const VARIANT varIndex, [out, retval] type *pVal);         \
        [propget, id(DISPID_LISTCOUNT), helpstring("Retrieves the number of items in the collection.")] HRESULT \
    Count([out, retval] long *pVal); \
        [propget, id(DISPID_COLLCOUNT), helpstring("Retrieves the number of items in the collection.")] HRESULT \
    length([out, retval] long *pVal); \
        [propget, id(DISPID_NEWENUM), restricted, hidden] HRESULT \
    _NewEnum([out, retval] IUnknown* *pVal);
#endif

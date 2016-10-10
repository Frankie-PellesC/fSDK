/*+@@file@@----------------------------------------------------------------*//*!
 \file		activecf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:04:11 2016
 \date		Modified on Sun Jun 19 16:04:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#define CFSTR_VFW_FILTERLIST "Video for Windows 4 Filters"
typedef struct tagVFW_FILTERLIST
{
	UINT cFilters;
	CLSID aClsId[1];
} VFW_FILTERLIST;

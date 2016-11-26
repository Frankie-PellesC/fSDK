/*+@@file@@----------------------------------------------------------------*//*!
 \file		Common.h
 \par Description 
            Macros for Interfaces handling
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:49:43 2016
 \date		Modified on Tue Nov  1 22:49:43 2016
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#define ASSIGN_VTBL(s, class, iface)    (s)->lpVtbl = (iface##Vtbl *)(((char *)(s)) + sizeof(class))  
#define ALLOC_IFACE(s, class, iface)	s = malloc(sizeof(class)+sizeof(iface##Vtbl));	\
										if (s) ASSIGN_VTBL(s, class, iface);


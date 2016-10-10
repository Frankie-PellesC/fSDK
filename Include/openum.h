/*+@@file@@----------------------------------------------------------------*//*!
 \file		openum.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:03:17 2016
 \date		Modified on Mon Sep 12 00:03:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __openum_h__
#define __openum_h__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum opcode_t
{
#define OPDEF(c,s,pop,push,args,type,l,s1,s2,ctrl) c,
#include "opcode.def"
#undef OPDEF
  CEE_COUNT,
} OPCODE;
typedef enum opcode_format_t 
{
	InlineNone		= 0,
	InlineVar		= 1,
	InlineI			= 2,
	InlineR			= 3,
	InlineBrTarget	= 4,
	InlineI8		= 5,
	InlineMethod	= 6,
	InlineField		= 7,
	InlineType		= 8,
	InlineString	= 9,
	InlineSig		= 10,
	InlineRVA		= 11,
	InlineTok		= 12,
	InlineSwitch	= 13,
	InlinePhi		= 14,
	ShortInline 	= 16,
	PrimaryMask   	= (ShortInline-1),
	ShortInlineVar 	= (ShortInline + InlineVar),
	ShortInlineI	= (ShortInline + InlineI),
	ShortInlineR	= (ShortInline + InlineR),
	ShortInlineBrTarget = (ShortInline + InlineBrTarget),
	InlineOpcode	= (ShortInline + InlineNone),
} OPCODE_FORMAT;
#endif

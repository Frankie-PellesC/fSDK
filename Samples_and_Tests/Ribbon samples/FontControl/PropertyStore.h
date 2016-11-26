/*+@@file@@----------------------------------------------------------------*//*!
 \file		PropertyStore.h
 \par Description 
            utility functions that are used for interacting with the font 
            control.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:53:11 2016
 \date		Modified on Tue Nov  1 22:53:11 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

/*
 *	PropertyStore.h/c implement the utility functions that are used for interacting 
 *	with the font control. Here you can find utility functions for converting IPropertyStore interface
 *	to and from CHARFORMAT2 to format the text displayed in the RichEdit control.
 */

#include <UIRibbon.h>
#include <Richedit.h>

#define TWIPS_PER_POINT 20 // For setting font size in CHARFORMAT2.

// Convert CHARFORMAT2 structure to and from IPropertyStore.
void GetCharFormat2FromIPropertyStore(IPropertyStore* pPropStore, CHARFORMAT2 *pCharFormat);
void GetIPropStoreFromCharFormat2(const CHARFORMAT2* pCharFormat, IPropertyStore *pPropStore);


/*+@@file@@----------------------------------------------------------------*//*!
 \file		wpdshellextension.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:09:18 2016
 \date		Modified on Mon Sep 19 17:09:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WPDSHELLEXTENSION_H__
#define WPDSHELLEXTENSION_H__
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID( CLSID_WPD_NAMESPACE_EXTENSION , 0x35786d3c, 0xb075, 0x49b9, 0x88, 0xdd, 0x02, 0x98, 0x76, 0xe1, 0x1c, 0x01 ); 
DEFINE_GUID( WPDNSE_OBJECT_PROPERTIES_V1 , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_HAS_CONTACT_PHOTO , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 2 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_HAS_THUMBNAIL , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 3 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_HAS_ICON , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 4 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_HAS_AUDIO_CLIP , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 5 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_HAS_ALBUM_ART , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 6 );
DEFINE_PROPERTYKEY( WPDNSE_OBJECT_OPTIMAL_READ_BLOCK_SIZE , 0x34d71409, 0x4b47, 0x4d80, 0xaa, 0xac, 0x3a, 0x28, 0xa4, 0xa3, 0xb3, 0xe6 , 7 ); 
#define WPDNSE_PROPSHEET_DEVICE_GENERAL     0x00000001
#define WPDNSE_PROPSHEET_STORAGE_GENERAL    0x00000002
#define WPDNSE_PROPSHEET_CONTENT_GENERAL    0x00000004
#define WPDNSE_PROPSHEET_CONTENT_REFERENCES 0x00000008
#define WPDNSE_PROPSHEET_CONTENT_RESOURCES  0x00000010
#define WPDNSE_PROPSHEET_CONTENT_DETAILS    0x00000020
#define STR_WPDNSE_FAST_ENUM              L"WPDNSE Fast Enum"
#define STR_WPDNSE_SIMPLE_ITEM            L"WPDNSE SimpleItem"
#endif

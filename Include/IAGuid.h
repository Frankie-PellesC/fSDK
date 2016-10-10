/*+@@file@@----------------------------------------------------------------*//*!
 \file		IAGuid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:56:36 2016
 \date		Modified on Sat Jul 16 18:56:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(_IA_GUID)
#define _IA_GUID
#if __POCC__ >= 500
#pragma once
#endif
#include <objbase.h>
extern const GUID NULLGUID;
#define INDEX_GUID_ROTATEDBOUNDINGBOX       0
#define INDEX_GUID_CUSTOMRECOGNIZERID       1
#define INDEX_GUID_SHAPENAME                2
#define INDEX_GUID_ALIGNMENTLEVEL           3
#define INDEX_GUID_NODEDATA                 4
#define INDEX_GUID_SEMANTICTYPE             5
#define INDEX_GUID_CONTENTTYPE              6
#define INDEX_GUID_ASCENDER                 7
#define INDEX_GUID_DESCENDER                8
#define INDEX_GUID_BASELINE                 9
#define INDEX_GUID_MIDLINE                 10
#define INDEX_GUID_RECOGNIZEDSTRING        11
#define INDEX_GUID_CONFIDENCELEVEL         12
#define INDEX_GUID_HOTPOINTS               13
#define INDEX_GUID_CENTROID                14
#define INDEX_GUID_ANALYSISHINTNAME         0
#define INDEX_GUID_GUIDE                    1
#define INDEX_GUID_WORDMODE                 2
#define INDEX_GUID_COERCETOFACTOID          3
#define INDEX_GUID_ALLOWPARTIALDICTIONARYTERMS 4
#define INDEX_GUID_PREFIXTEXT               5
#define INDEX_GUID_SUFFIXTEXT               6
#define INDEX_GUID_FACTOID                  7
#define INDEX_GUID_WORDLIST                 8
#define INDEX_GUID_TOPINKBREAKSONLY         9
#define INDEX_GUID_ENABLEDUNICODECHARACTERRANGES 10
#define INDEX_GUID_ROOT                     0
#define INDEX_GUID_UNCLASSIFIEDINK          1
#define INDEX_GUID_WRITINGREGION            2
#define INDEX_GUID_ANALYSISHINT             3
#define INDEX_GUID_OBJECT                   4
#define INDEX_GUID_INKDRAWING               5
#define INDEX_GUID_IMAGE                    6
#define INDEX_GUID_PARAGRAPH                7
#define INDEX_GUID_LINE                     8
#define INDEX_GUID_INKBULLET                9
#define INDEX_GUID_INKWORD                 10
#define INDEX_GUID_TEXTWORD                11
#define INDEX_GUID_CUSTOMRECOGNIZER        12
#define INDEX_INK_ANALYSIS_GUID_MAX                   128
#if !defined(INITGUID)
extern const ULONG KNOWN_INK_ANALYSIS_GUID_BASE_INDEX;
extern const ULONG KNOWN_INK_ANALYSIS_GUID_INDEX_LIMIT;
extern const ULONG CUSTOM_INK_ANALYSIS_GUID_BASE_INDEX;
extern const GUID FAR KNOWN_INK_ANALYSIS_GUIDS[];
extern const ULONG KNOWN_INK_ANALYSIS_GUID_COUNT;
#else
#define MAX_KNOWN_INK_ANALYSIS_GUID_INDEX    128
extern const ULONG KNOWN_INK_ANALYSIS_GUID_INDEX_LIMIT = MAX_KNOWN_INK_ANALYSIS_GUID_INDEX;
extern const ULONG CUSTOM_INK_ANALYSIS_GUID_BASE_INDEX = MAX_KNOWN_INK_ANALYSIS_GUID_INDEX;
extern const GUID FAR KNOWN_INK_ANALYSIS_GUIDS[15] = 
{
    { 0x9DABD067, 0x4748, 0x4e35, { 0xBA, 0x1F, 0xF6, 0x43, 0xFB, 0xE6, 0x7C, 0x62 } },
    { 0xCE620704, 0x71F7, 0x4C87, { 0xA8, 0x55, 0x8b, 0x66, 0xCD, 0x70, 0xC7, 0x67 } },
    { 0x83AA077C, 0x955A, 0x4EF8, { 0x80, 0x15, 0xD5, 0x32, 0x35, 0xEB, 0x15, 0x30 } },
    { 0xAE0BFB16, 0xB9DF, 0x4399, { 0x82, 0x28, 0x1F, 0x5B, 0x6D, 0x90, 0x56, 0xED } },
    { 0xF5D5FB58, 0x4AA1, 0x448A, { 0xA9, 0x00, 0x40, 0x5F, 0x6D, 0xA1, 0xF8, 0x8D } },
    { 0xE0FDA714, 0xD3A9, 0x4CEE, { 0xBB, 0xB6, 0xAD, 0x0C, 0x8A, 0xA7, 0x18, 0x76 } },
    { 0x5BC84266, 0x7D7E, 0x4CCC, { 0xA8, 0x1F, 0x16, 0xA2, 0x56, 0xF6, 0xCB, 0x30 } },
    { 0xFFBE58C0, 0x9895, 0x4A5d, { 0xB0, 0x6B, 0xC7, 0xC9, 0x77, 0x4E, 0x32, 0x47 } },
    { 0x106F1013, 0x0517, 0x4BB3, { 0x83, 0x28, 0x2D, 0x6C, 0xBA, 0xB1, 0x00, 0xE3 } },
    { 0x19859AE9, 0x35ED, 0x4D53, { 0x91, 0x9D, 0xF7, 0x05, 0xEC, 0xA8, 0x34, 0x73 } },
    { 0xEC351E6F, 0xF560, 0x4C0F, { 0xAD, 0x13, 0x17, 0xC0, 0xCD, 0x49, 0x8D, 0xAF } },
    { 0x25979182, 0x2D6B, 0x44A3, { 0xAC, 0xD6, 0x5A, 0x2A, 0xD5, 0x1C, 0xD0, 0x5D } },
    { 0x7DFE11A7, 0xFB5D, 0x4958, { 0x87, 0x65, 0x15, 0x4A, 0xDF, 0x0D, 0x83, 0x3F } },
    { 0x4F344747, 0xBC2D, 0x471E, { 0x8C, 0xBA, 0x00, 0x2D, 0x11, 0xA3, 0x6E, 0x32 } },
    { 0xFDC4935E, 0xF009, 0x4C92, { 0x8B, 0x17, 0x37, 0x54, 0xCC, 0xAB, 0x0D, 0xF4 } },
};
extern const GUID FAR KNOWN_INK_ANALYSIS_HINT_GUIDS[11] =
{
    { 0x2967B8B1, 0x739D, 0x4837, { 0x99, 0xA2, 0x50, 0xFD, 0xA9, 0x70, 0x35, 0x69 } },
    { 0x6D112F6B, 0xD5F9, 0x4c6c, { 0xA4, 0x9C, 0x3A, 0x7C, 0xB8, 0xCB, 0x7E, 0x9A } },
    { 0x08D18D88, 0xDD81, 0x4489, { 0x80, 0xD6, 0x11, 0x19, 0x7F, 0x83, 0x63, 0x16 } },
    { 0x4A7A02B9, 0x3D6E, 0x4127, { 0x94, 0x53, 0x12, 0x91, 0x1F, 0x36, 0xC6, 0xA4 } },
    { 0xA41B59B6, 0x3D34, 0x4c06, { 0x85, 0x91, 0x3B, 0x88, 0xA8, 0xA5, 0xAE, 0x00 } },
    { 0xF77659DC, 0x7480, 0x4598, { 0xAA, 0xB4, 0xDC, 0x9B, 0x28, 0x05, 0x59, 0xF1 } },
    { 0xAF720D9E, 0x7A41, 0x4099, { 0x85, 0x59, 0x2A, 0x50, 0x8B, 0x35, 0xCC, 0x87 } },
    { 0x9D104BEA, 0x822B, 0x430b, { 0xBA, 0x6A, 0xE0, 0x53, 0x30, 0xDC, 0xC7, 0x0F } },
    { 0xFCEBB0BD, 0xE304, 0x4966, { 0x80, 0x22, 0x09, 0xCD, 0x4B, 0x45, 0xCD, 0x3D } },
    { 0x131F5E3B, 0x2B85, 0x43a2, { 0x90, 0xD0, 0xE7, 0x9B, 0x1F, 0x0F, 0xAE, 0x0E } },
    { 0x02AFC9E0, 0xCB15, 0x42b0, { 0xAC, 0x66, 0x29, 0xF3, 0xD8, 0x22, 0xC5, 0xA2 } },
};
extern const GUID FAR KNOWN_NODETYPE_GUIDS[13] = 
{
    { 0xA219A8C3, 0xCEB5, 0x4E26, { 0xBC, 0x66, 0xE8, 0xE3, 0xB4, 0xF9, 0xAA, 0xE1 } },
    { 0x1CC7E245, 0xD03D, 0x4DF2, { 0x8A, 0x81, 0xA5, 0x5C, 0xF7, 0x40, 0x3E, 0xB5 } },
    { 0xEC91D634, 0x4105, 0x4C84, { 0x9E, 0x4D, 0xF6, 0x9E, 0xBA, 0x17, 0xFA, 0xEC } },
    { 0xB3E85327, 0x34D8, 0x4A53, { 0x9B, 0xED, 0xC4, 0xAA, 0x61, 0x24, 0x28, 0xD3 } },
    { 0x9D81B680, 0x534F, 0x4FFF, { 0xB9, 0xD0, 0xAE, 0x39, 0x95, 0xEA, 0x37, 0x86 } },
    { 0xAA19D319, 0x57CD, 0x4503, { 0x93, 0x50, 0x6C, 0x0F, 0xB7, 0x66, 0xA4, 0xB8 } },
    { 0x142D59BA, 0x3E9A, 0x4EE0, { 0xBC, 0x91, 0x19, 0x9A, 0x7B, 0x7F, 0x7E, 0x17 } },
    { 0x65B9CE71, 0xA963, 0x48AD, { 0x91, 0x3F, 0x41, 0x1E, 0x81, 0xC9, 0x85, 0xF0 } },
    { 0x67D98603, 0xB3C5, 0x4261, { 0x82, 0x56, 0xAD, 0xC3, 0xCE, 0xA2, 0xAD, 0x67 } },
    { 0x88A74BDF, 0x43FA, 0x4A15, { 0x89, 0x0B, 0x9A, 0x33, 0x86, 0x5A, 0x60, 0x91 } },
    { 0xBD6AAA31, 0x588B, 0x4246, { 0x86, 0x50, 0x4E, 0x78, 0x59, 0x23, 0x30, 0x17 } },
    { 0x4F84A842, 0x2936, 0x464C, { 0xAB, 0x61, 0x37, 0x52, 0x45, 0x1C, 0x21, 0x29 } },
    { 0x8A269227, 0x2BD1, 0x4281, { 0xAB, 0x62, 0x79, 0xFA, 0x24, 0x18, 0xA5, 0xAC } },
};
extern const ULONG KNOWN_INK_ANALYSIS_GUID_COUNT = sizeof(KNOWN_INK_ANALYSIS_GUIDS) / sizeof(GUID);
#endif
#define GUID_CNP_ROTATEDBOUNDINGBOX            (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ROTATEDBOUNDINGBOX           ]))) 
#define GUID_CNP_CUSTOMRECOGNIZERID            (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CUSTOMRECOGNIZERID           ])))
#define GUID_CNP_SHAPENAME                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SHAPENAME                    ]))) 
#define GUID_CNP_ALIGNMENTLEVEL                (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ALIGNMENTLEVEL               ])))
#define GUID_CNP_CONTENTTYPE                   (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONTENTTYPE                  ])))
#define GUID_CNP_NODEDATA                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_NODEDATA                     ])))
#define GUID_CNP_SEMANTICTYPE                  (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SEMANTICTYPE                 ])))
#define GUID_CNP_ASCENDER                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ASCENDER                    ]))) 
#define GUID_CNP_DESCENDER                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_DESCENDER                   ]))) 
#define GUID_CNP_BASELINE                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_BASELINE                     ]))) 
#define GUID_CNP_MIDLINE                       (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_MIDLINE                      ]))) 
#define GUID_CNP_RECOGNIZEDSTRING              (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_RECOGNIZEDSTRING             ]))) 
#define GUID_CNP_CONFIDENCELEVEL               (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONFIDENCELEVEL              ])))
#define GUID_CNP_HOTPOINTS                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_HOTPOINTS                    ])))
#define GUID_CNP_CENTROID                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CENTROID                     ])))
#define GUID_AHP_ANALYSISHINTNAME              (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ANALYSISHINTNAME             ]))) 
#define GUID_AHP_GUIDE                         (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_GUIDE                        ]))) 
#define GUID_AHP_WORDMODE                      (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDMODE                     ]))) 
#define GUID_AHP_COERCETOFACTOID               (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_COERCETOFACTOID              ]))) 
#define GUID_AHP_ALLOWPARTIALDICTIONARYTERMS   (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ALLOWPARTIALDICTIONARYTERMS  ]))) 
#define GUID_AHP_PREFIXTEXT                    (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_PREFIXTEXT                   ]))) 
#define GUID_AHP_SUFFIXTEXT                    (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_SUFFIXTEXT                   ]))) 
#define GUID_AHP_FACTOID                       (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_FACTOID                      ]))) 
#define GUID_AHP_WORDLIST                      (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDLIST                     ])))
#define GUID_AHP_TOPINKBREAKSONLY              (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_TOPINKBREAKSONLY             ])))
#define GUID_AHP_ENABLEDUNICODECHARACTERRANGES (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ENABLEDUNICODECHARACTERRANGES])))
#define GUID_CNT_ROOT                          (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_ROOT                  ])))
#define GUID_CNT_UNCLASSIFIEDINKNODE           (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_UNCLASSIFIEDINK       ])))
#define GUID_CNT_WRITINGREGION                 (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_WRITINGREGION         ])))
#define GUID_CNT_ANALYSISHINT                  (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_ANALYSISHINT          ])))
#define GUID_CNT_OBJECT                        (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_OBJECT                ])))
#define GUID_CNT_INKDRAWING                    (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKDRAWING            ])))
#define GUID_CNT_IMAGE                         (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_IMAGE                 ])))
#define GUID_CNT_PARAGRAPH                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_PARAGRAPH             ])))
#define GUID_CNT_LINE                          (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_LINE                  ])))
#define GUID_CNT_INKBULLET                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKBULLET             ])))
#define GUID_CNT_INKWORD                       (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKWORD               ])))
#define GUID_CNT_TEXTWORD                      (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_TEXTWORD              ])))
#define GUID_CNT_CUSTOMRECOGNIZER              (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_CUSTOMRECOGNIZER      ])))
#endif

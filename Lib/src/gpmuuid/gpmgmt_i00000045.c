// Created file "Lib\src\gpmuuid\gpmgmt_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_GPMMapEntryCollection, 0x0cf75d5b, 0xa3a1, 0x4c55, 0xb4, 0xfe, 0x9e, 0x14, 0x9c, 0x41, 0xf6, 0x6d);


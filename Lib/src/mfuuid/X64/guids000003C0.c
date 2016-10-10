// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETRTPSTREAM_ACCELERATIONPARAMETERS, 0x44f3e6e8, 0xc948, 0x4e5c, 0x96, 0x98, 0xad, 0xee, 0x56, 0x1f, 0xc3, 0x49);


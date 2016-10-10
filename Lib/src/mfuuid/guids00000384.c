// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SDPBUILDER_CONTENTDESCRIPTONLIMIT, 0x3648a6ad, 0xff7d, 0x447a, 0xab, 0x2d, 0xdc, 0x7e, 0x26, 0x07, 0x7d, 0x75);


// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_AMTimelineEffect, 0x74d2ec82, 0x6233, 0x11d2, 0x8c, 0xad, 0x00, 0xa0, 0x24, 0x58, 0x09, 0x02);


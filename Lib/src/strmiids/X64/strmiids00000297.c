// Created file "Lib\src\strmiids\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CODECAPI_AVEncStatMPVSkippedEmptyFrames, 0x32195fd3, 0x590d, 0x4812, 0xa7, 0xed, 0x6d, 0x63, 0x9a, 0x1f, 0x97, 0x11);


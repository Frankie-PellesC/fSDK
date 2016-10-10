// Created file "Lib\src\mfuuid\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFClockRateMatch, 0x828e7c7e, 0x84f2, 0x4b45, 0x8c, 0xee, 0x5b, 0xb3, 0xd8, 0x27, 0xfc, 0xf5);


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

DEFINE_GUID(GUID_COUNTER_ASFMEDIASOURCE, 0xe6466dde, 0x650f, 0x4661, 0xb5, 0xd4, 0xa1, 0x0b, 0xf3, 0xea, 0xf9, 0xb8);


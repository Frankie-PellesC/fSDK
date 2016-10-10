// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE, 0xeed904df, 0xb142, 0x4183, 0xb1, 0x0b, 0x5a, 0x11, 0x97, 0xa3, 0x78, 0x64);


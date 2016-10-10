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

DEFINE_GUID(IID_IMFChannelAccelerator, 0x2d188d37, 0x0418, 0x44d2, 0xb8, 0xd1, 0xe0, 0x6f, 0x0a, 0x9d, 0xb3, 0xdc);


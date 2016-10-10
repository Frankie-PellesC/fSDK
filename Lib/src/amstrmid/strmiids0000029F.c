// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CODECAPI_AVEncMP12MuxNumStreams, 0xf7164a41, 0xdced, 0x4659, 0xa8, 0xf2, 0xfb, 0x69, 0x3f, 0x2a, 0x4c, 0xd0);


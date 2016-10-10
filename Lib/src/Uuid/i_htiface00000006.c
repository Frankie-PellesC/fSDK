// Created file "Lib\src\Uuid\i_htiface"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITargetFramePriv2, 0xb2c867e6, 0x69d6, 0x46f2, 0xa6, 0x11, 0xde, 0xd9, 0xa4, 0xbd, 0x7f, 0xef);


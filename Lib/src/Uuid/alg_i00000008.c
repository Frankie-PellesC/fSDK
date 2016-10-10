// Created file "Lib\src\Uuid\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISecondaryControlChannel, 0xa23f9d10, 0x714c, 0x41fe, 0x84, 0x71, 0xff, 0xb1, 0x9b, 0xc2, 0x84, 0x54);


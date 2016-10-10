// Created file "Lib\src\Uuid\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_FSFILTER_HSM, 0xd546500a, 0x2aeb, 0x45f6, 0x94, 0x82, 0xf4, 0xb1, 0x79, 0x9c, 0x31, 0x77);


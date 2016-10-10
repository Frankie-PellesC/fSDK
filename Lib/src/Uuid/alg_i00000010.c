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

DEFINE_GUID(CLSID_SecondaryControlChannel, 0x7b3181a0, 0xc92f, 0x4567, 0xb0, 0xfa, 0xcd, 0x9a, 0x10, 0xec, 0xd7, 0xd1);


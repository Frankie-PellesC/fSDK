// Created file "Lib\src\Uuid\X64\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPendingProxyConnection, 0xb68e5043, 0x3e3d, 0x4cc2, 0xb9, 0xc1, 0x5f, 0x8f, 0x88, 0xfe, 0xe8, 0x1c);


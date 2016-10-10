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

DEFINE_GUID(CLSID_PendingProxyConnection, 0xd8a68e5e, 0x2b37, 0x426c, 0xa3, 0x29, 0xc1, 0x17, 0xc1, 0x4c, 0x42, 0x9e);


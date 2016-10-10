// Created file "Lib\src\CertIdl\X64\certreqd_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertRequestD, 0xd99e6e70, 0xfc88, 0x11d0, 0xb4, 0x98, 0x00, 0xa0, 0xc9, 0x03, 0x12, 0xf3);

DEFINE_GUID(IID_ICertRequestD2, 0x5422fd3a, 0xd4b8, 0x4cef, 0xa1, 0x2e, 0xe8, 0x7d, 0x4c, 0xa2, 0x2e, 0x90);


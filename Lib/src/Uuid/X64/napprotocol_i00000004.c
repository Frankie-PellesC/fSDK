// Created file "Lib\src\Uuid\X64\napprotocol_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSoHProcessor, 0xfb2fa8b0, 0x2cd5, 0x457d, 0xab, 0xa8, 0x43, 0x76, 0xf6, 0x3e, 0xa1, 0xc0);


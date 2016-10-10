// Created file "Lib\src\MMC\X64\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRequiredExtensions, 0x72782d7a, 0xa4a0, 0x11d1, 0xaf, 0x0f, 0x00, 0xc0, 0x4f, 0xb6, 0xdd, 0x2c);


// Created file "Lib\src\MMC\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISnapinHelp2, 0x4861a010, 0x20f9, 0x11d2, 0xa5, 0x10, 0x00, 0xc0, 0x4f, 0xb6, 0xdd, 0x2c);


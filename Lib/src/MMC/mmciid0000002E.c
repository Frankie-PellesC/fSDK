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

DEFINE_GUID(IID_IViewExtensionCallback, 0x34dd928a, 0x7599, 0x41e5, 0x9f, 0x5e, 0xd6, 0xbc, 0x30, 0x62, 0xc2, 0xda);


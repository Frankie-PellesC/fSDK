// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FORMAT_CC_CONTAINER, 0x50997a4a, 0xe508, 0x4054, 0xa2, 0xb2, 0x10, 0xff, 0x0a, 0xc1, 0xa6, 0x9a);


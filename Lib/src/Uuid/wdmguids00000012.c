// Created file "Lib\src\Uuid\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_TRANSLATOR_INTERFACE_STANDARD, 0x6c154a92, 0xaacf, 0x11d0, 0x8d, 0x2a, 0x00, 0xa0, 0xc9, 0x06, 0xb2, 0x44);


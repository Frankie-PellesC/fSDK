// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSCATEGORY_ESCALANTE_PLATFORM_DRIVER, 0x74f3aea8, 0x9768, 0x11d1, 0x8e, 0x07, 0x00, 0xa0, 0xc9, 0x5e, 0xc2, 0x2e);


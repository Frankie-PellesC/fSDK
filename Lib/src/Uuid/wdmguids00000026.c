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

DEFINE_GUID(GUID_BUS_TYPE_PCI, 0xc8ebdfb0, 0xb510, 0x11d0, 0x80, 0xe5, 0x00, 0xa0, 0xc9, 0x25, 0x42, 0xe3);


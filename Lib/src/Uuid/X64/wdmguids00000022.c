// Created file "Lib\src\Uuid\X64\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_MSIX_TABLE_CONFIG_INTERFACE, 0x1a6a460b, 0x194f, 0x455d, 0xb3, 0x4b, 0xb8, 0x4c, 0x5b, 0x05, 0x71, 0x2b);


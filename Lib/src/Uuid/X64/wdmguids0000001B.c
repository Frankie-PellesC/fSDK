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

DEFINE_GUID(GUID_AGP_TARGET_BUS_INTERFACE_STANDARD, 0xb15cfce8, 0x06d1, 0x4d37, 0x9d, 0x4c, 0xbe, 0xdd, 0xe0, 0xc2, 0xa6, 0xff);


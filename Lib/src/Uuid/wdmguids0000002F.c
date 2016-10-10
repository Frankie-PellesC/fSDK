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

DEFINE_GUID(GUID_BUS_TYPE_1394, 0xf74e73eb, 0x9ac5, 0x45eb, 0xbe, 0x4d, 0x77, 0x2c, 0xc7, 0x1d, 0xdf, 0xb3);


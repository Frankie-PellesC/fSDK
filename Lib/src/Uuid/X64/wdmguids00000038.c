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

DEFINE_GUID(GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x52363f5b, 0xd891, 0x429b, 0x81, 0x95, 0xae, 0xc5, 0xfe, 0xf6, 0x85, 0x3c);


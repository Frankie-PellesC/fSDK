// Created file "Lib\src\Uuid\X64\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDynamicPortMappingCollection, 0xb60de00f, 0x156e, 0x4e8d, 0x9e, 0xc1, 0x3a, 0x23, 0x42, 0xc1, 0x08, 0x99);


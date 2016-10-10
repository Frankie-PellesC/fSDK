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

DEFINE_GUID(IID_IStaticPortMappingCollection, 0xcd1f3e77, 0x66d6, 0x4664, 0x82, 0xc7, 0x36, 0xdb, 0xb6, 0x41, 0xd0, 0xf1);


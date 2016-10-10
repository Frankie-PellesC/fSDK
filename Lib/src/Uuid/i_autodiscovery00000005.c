// Created file "Lib\src\Uuid\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_AutoDiscoveryProvider, 0xc4f3d5bf, 0x4809, 0x44e3, 0x84, 0xa4, 0x36, 0x8b, 0x6b, 0x33, 0xb0, 0xb4);


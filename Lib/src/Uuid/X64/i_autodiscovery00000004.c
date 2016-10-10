// Created file "Lib\src\Uuid\X64\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAutoDiscoveryProvider, 0x9dcf4a37, 0x01de, 0x4549, 0xa9, 0xcb, 0x3a, 0xc3, 0x1e, 0xc2, 0x3c, 0x4f);


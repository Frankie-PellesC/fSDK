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

DEFINE_GUID(LIBID_AutoDiscovery, 0x4eafb888, 0x81cb, 0x4eba, 0xba, 0xc9, 0xda, 0x25, 0x4e, 0x57, 0x21, 0xf1);


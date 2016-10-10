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

DEFINE_GUID(IID_IAccountDiscovery, 0xfa202bbc, 0x6abe, 0x4c17, 0xb1, 0x84, 0x57, 0x0b, 0x6c, 0xf2, 0x56, 0xa6);


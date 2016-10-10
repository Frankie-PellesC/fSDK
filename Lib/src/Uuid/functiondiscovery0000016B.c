// Created file "Lib\src\Uuid\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_PNPX_CompatibleTypes, 0x4fc5077e, 0xb686, 0x44be, 0x93, 0xe3, 0x86, 0xca, 0xfe, 0x36, 0x8c, 0xcd);


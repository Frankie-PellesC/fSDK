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

DEFINE_GUID(PKEY_PNPX_Category_Desc_NonPlural, 0x656a3bb3, 0xecc0, 0x43fd, 0x84, 0x77, 0x4a, 0xe0, 0x40, 0x4a, 0x96, 0xcd);


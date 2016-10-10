// Created file "Lib\src\Uuid\i_dxtrans"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXTFilter, 0x385a91bc, 0x1e8a, 0x4e4a, 0xa7, 0xa6, 0xf4, 0xfc, 0x1e, 0x6c, 0xa1, 0xbd);


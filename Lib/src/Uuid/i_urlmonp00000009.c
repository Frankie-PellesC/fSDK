// Created file "Lib\src\Uuid\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IZoneIdentifierPriv, 0x5e4d4a35, 0x76e4, 0x4f30, 0x9a, 0x3c, 0xa4, 0x0c, 0x65, 0xfa, 0xdf, 0xf2);


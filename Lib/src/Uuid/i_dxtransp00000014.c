// Created file "Lib\src\Uuid\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXTFilterFactory, 0x81397204, 0xf51a, 0x4571, 0x8d, 0x7b, 0xdc, 0x03, 0x05, 0x21, 0xaa, 0xbd);


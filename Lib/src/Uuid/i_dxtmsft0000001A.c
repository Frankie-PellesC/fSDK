// Created file "Lib\src\Uuid\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTGridSize, 0xd6bbe91e, 0xff60, 0x11d2, 0x8f, 0x6e, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x74);


// Created file "Lib\src\Uuid\X64\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXTStrips, 0x63a4b1fc, 0x259a, 0x4a5b, 0x81, 0x29, 0xa8, 0x3b, 0x8c, 0x9e, 0x6f, 0x4f);


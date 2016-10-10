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

DEFINE_GUID(CLSID_DXTMaskFilter, 0x3a04d93b, 0x1edd, 0x4f3f, 0xa3, 0x75, 0xa0, 0x3e, 0xc1, 0x95, 0x72, 0xc4);


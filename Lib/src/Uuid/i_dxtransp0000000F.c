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

DEFINE_GUID(LIBID_DXTRANSPLib, 0x527a4da4, 0x7f2c, 0x11d2, 0xb1, 0x2d, 0x00, 0x00, 0xf8, 0x1f, 0x59, 0x95);


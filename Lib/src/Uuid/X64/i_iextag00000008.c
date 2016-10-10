// Created file "Lib\src\Uuid\X64\i_iextag"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAnchorClick, 0x13d5413b, 0x33b9, 0x11d2, 0x95, 0xa7, 0x00, 0xc0, 0x4f, 0x8e, 0xcb, 0x02);


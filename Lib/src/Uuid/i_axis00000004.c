// Created file "Lib\src\Uuid\i_axis"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_AsyncIeAxiService, 0x4c691564, 0x057c, 0x430a, 0xbc, 0x66, 0x21, 0x20, 0xbf, 0xb0, 0x48, 0xf7);


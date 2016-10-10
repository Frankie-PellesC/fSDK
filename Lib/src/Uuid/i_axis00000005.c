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

DEFINE_GUID(IID_IeAxiService2, 0x79f729c0, 0x2ccb, 0x47a4, 0xb8, 0xea, 0x59, 0x45, 0x21, 0xf4, 0x29, 0x8a);


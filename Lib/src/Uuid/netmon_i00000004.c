// Created file "Lib\src\Uuid\netmon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTC, 0x4811ea40, 0xb582, 0x11ce, 0xb5, 0xaf, 0x00, 0xaa, 0x00, 0x6c, 0xb3, 0x7d);


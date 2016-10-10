// Created file "Lib\src\Uuid\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_AdapterInfo, 0x6f9942c9, 0xc1b1, 0x4ab5, 0x93, 0xda, 0x60, 0x58, 0x99, 0x1d, 0xc8, 0xf3);


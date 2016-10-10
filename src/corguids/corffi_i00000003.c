// Created file "Lib\src\corguids\corffi_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IManagedInstanceWrapper, 0x96e328fe, 0x9a83, 0x439f, 0xa2, 0x98, 0x8f, 0x9c, 0xaa, 0x29, 0x95, 0xf0);


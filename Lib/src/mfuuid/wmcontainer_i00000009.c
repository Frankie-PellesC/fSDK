// Created file "Lib\src\mfuuid\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFASFMultiplexer, 0x57bdd80a, 0x9b38, 0x4838, 0xb7, 0x37, 0xc5, 0x8f, 0x67, 0x0d, 0x7d, 0x4f);


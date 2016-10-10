// Created file "Lib\src\Uuid\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwRules, 0x9c4c6277, 0x5027, 0x441e, 0xaf, 0xae, 0xca, 0x1f, 0x54, 0x2d, 0xa0, 0x09);


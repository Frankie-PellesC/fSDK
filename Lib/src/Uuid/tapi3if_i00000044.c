// Created file "Lib\src\Uuid\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITForwardInformation2, 0x5229b4ed, 0xb260, 0x4382, 0x8e, 0x1a, 0x5d, 0xf3, 0xa8, 0xa4, 0xcc, 0xc0);


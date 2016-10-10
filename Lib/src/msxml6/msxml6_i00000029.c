// Created file "Lib\src\msxml6\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVBSAXXMLFilter, 0x1299eb1b, 0x5b88, 0x433e, 0x82, 0xde, 0x82, 0xca, 0x75, 0xad, 0x4e, 0x04);


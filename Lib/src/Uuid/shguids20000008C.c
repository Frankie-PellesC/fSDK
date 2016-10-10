// Created file "Lib\src\Uuid\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INamespaceWalkCB, 0xd92995f8, 0xcf5e, 0x4a76, 0xbf, 0x59, 0xea, 0xd3, 0x9e, 0xa2, 0xb9, 0x7e);


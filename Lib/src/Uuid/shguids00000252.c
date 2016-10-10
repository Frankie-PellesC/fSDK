// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DocPropDrawPercentFullControl, 0xab517586, 0x73cf, 0x489c, 0x8d, 0x8c, 0x5a, 0xe0, 0xea, 0xd0, 0x61, 0x3a);


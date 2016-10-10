// Created file "Lib\src\certidl\ocsprevp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOCSPRevInfoProviderManager, 0xf85c5127, 0xf108, 0x497d, 0x8f, 0xcc, 0xb2, 0xa7, 0x09, 0x04, 0x7c, 0x98);

DEFINE_GUID(IID_IOCSPRevInfoProvider, 0x93f568ff, 0xb8c7, 0x483b, 0x8d, 0xef, 0x5e, 0x6e, 0xef, 0x8b, 0x76, 0x50);


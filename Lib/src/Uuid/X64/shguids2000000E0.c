// Created file "Lib\src\Uuid\X64\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHomeGroup, 0x7a3bd1d9, 0x35a9, 0x4fb3, 0xa4, 0x67, 0xf4, 0x8c, 0xac, 0x35, 0xe2, 0xd0);


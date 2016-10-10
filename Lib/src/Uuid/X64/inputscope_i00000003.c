// Created file "Lib\src\Uuid\X64\inputscope_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITfInputScope, 0xfde1eaee, 0x6924, 0x4cdf, 0x91, 0xe7, 0xda, 0x38, 0xcf, 0xf5, 0x55, 0x9d);

DEFINE_GUID(IID_ITfInputScope2, 0x5731eaa0, 0x6bc2, 0x4681, 0xa5, 0x32, 0x92, 0xfb, 0xb7, 0x4d, 0x7c, 0x41);


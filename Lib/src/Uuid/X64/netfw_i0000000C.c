// Created file "Lib\src\Uuid\X64\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwRule2, 0x9c27c8da, 0x189b, 0x4dde, 0x89, 0xf7, 0x8b, 0x39, 0xa3, 0x16, 0x78, 0x2c);


// Created file "Lib\src\Uuid\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwV6Connection, 0x1b664cb0, 0x9403, 0x4061, 0xb3, 0x56, 0xb3, 0x74, 0xc6, 0x3b, 0x12, 0x41);


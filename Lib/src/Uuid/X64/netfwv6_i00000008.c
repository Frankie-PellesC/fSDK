// Created file "Lib\src\Uuid\X64\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwV6ConnectionCollection, 0x2a57d76e, 0x94d7, 0x484a, 0x9d, 0x41, 0x72, 0xce, 0x28, 0x9d, 0xed, 0x01);


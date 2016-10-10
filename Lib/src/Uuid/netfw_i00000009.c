// Created file "Lib\src\Uuid\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwAuthorizedApplication, 0xb5e64ffa, 0xc2c5, 0x444e, 0xa3, 0x01, 0xfb, 0x5e, 0x00, 0x01, 0x80, 0x50);


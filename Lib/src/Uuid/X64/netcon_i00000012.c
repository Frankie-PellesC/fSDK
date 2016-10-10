// Created file "Lib\src\Uuid\X64\netcon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetSharingPrivateConnectionCollection, 0x38ae69e0, 0x4409, 0x402a, 0xa2, 0xcb, 0xe9, 0x65, 0xc7, 0x27, 0xf8, 0x40);


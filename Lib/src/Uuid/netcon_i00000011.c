// Created file "Lib\src\Uuid\netcon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetSharingPublicConnectionCollection, 0x7d7a6355, 0xf372, 0x4971, 0xa1, 0x49, 0xbf, 0xc9, 0x27, 0xbe, 0x76, 0x2a);


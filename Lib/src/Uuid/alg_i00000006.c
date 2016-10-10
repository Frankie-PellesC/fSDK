// Created file "Lib\src\Uuid\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPersistentDataChannel, 0xa180e934, 0xd92a, 0x415d, 0x91, 0x44, 0x75, 0x9f, 0x80, 0x54, 0xe8, 0xf6);


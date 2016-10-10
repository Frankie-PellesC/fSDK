// Created file "Lib\src\Uuid\X64\i_interned"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDocHostUIHandlerPriv, 0xf0d241d1, 0x5d0e, 0x4e85, 0xbc, 0xb4, 0xfa, 0xd7, 0xf7, 0xc5, 0x52, 0x8c);


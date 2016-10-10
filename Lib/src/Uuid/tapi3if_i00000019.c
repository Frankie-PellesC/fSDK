// Created file "Lib\src\Uuid\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITStaticAudioTerminal, 0xa86b7871, 0xd14c, 0x48e6, 0x92, 0x2e, 0xa8, 0xd1, 0x5f, 0x98, 0x48, 0x00);


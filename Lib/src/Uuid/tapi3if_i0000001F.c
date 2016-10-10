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

DEFINE_GUID(IID_ITLegacyCallMediaControl2, 0x57ca332d, 0x7bc2, 0x44f1, 0xa6, 0x0c, 0x93, 0x6f, 0xe8, 0xd7, 0xce, 0x73);


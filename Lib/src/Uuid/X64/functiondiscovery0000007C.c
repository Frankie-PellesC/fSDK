// Created file "Lib\src\Uuid\X64\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DOMAIN_JOIN_GUID, 0x1ce20aba, 0x9851, 0x4421, 0x94, 0x30, 0x1d, 0xde, 0xb7, 0x66, 0xe8, 0x09);


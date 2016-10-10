// Created file "Lib\src\Uuid\eapclsid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_HostAuthenticatorApis, 0x8b4b437e, 0x4cab, 0x4e83, 0x89, 0xf6, 0x7f, 0x9f, 0x7d, 0xf4, 0x14, 0xea);


// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_PROVIDER_CONTEXT_SECURE_SOCKET_IPSEC, 0x8c2d4144, 0xf8e0, 0x42c0, 0x94, 0xce, 0x7c, 0xcf, 0xc6, 0x3b, 0x2f, 0x9b);


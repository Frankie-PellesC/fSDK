// Created file "Lib\src\Uuid\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_SUBLAYER_RPC_AUDIT, 0x758c84f4, 0xfb48, 0x4de9, 0x9a, 0xeb, 0x3e, 0xd9, 0x55, 0x1a, 0xb1, 0xfd);


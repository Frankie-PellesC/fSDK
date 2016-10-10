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

DEFINE_GUID(FWPM_PROVIDER_CONTEXT_SECURE_SOCKET_AUTHIP, 0xb25ea800, 0x0d02, 0x46ed, 0x92, 0xbd, 0x7f, 0xa8, 0x4b, 0xb7, 0x3e, 0x9d);


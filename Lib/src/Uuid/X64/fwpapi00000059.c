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

DEFINE_GUID(FWPM_SUBLAYER_SECURE_SOCKET, 0x15a66e17, 0x3f3c, 0x4f7b, 0xaa, 0x6c, 0x81, 0x2a, 0xa6, 0x13, 0xdd, 0x82);


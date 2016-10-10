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

DEFINE_GUID(FWPM_CONDITION_CLIENT_CERT_KEY_LENGTH, 0xa3ec00c7, 0x05f4, 0x4df7, 0x91, 0xf2, 0x5f, 0x60, 0xd9, 0x1f, 0xf4, 0x43);


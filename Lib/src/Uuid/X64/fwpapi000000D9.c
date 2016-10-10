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

DEFINE_GUID(FWPM_CALLOUT_TCP_CHIMNEY_ACCEPT_LAYER_V4, 0xe183ecb2, 0x3a7f, 0x4b54, 0x8a, 0xd9, 0x76, 0x05, 0x0e, 0xd8, 0x80, 0xca);


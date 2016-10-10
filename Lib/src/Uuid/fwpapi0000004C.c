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

DEFINE_GUID(FWPM_LAYER_ALE_RESOURCE_RELEASE_V6, 0xf4e5ce80, 0xedcc, 0x4e13, 0x8a, 0x2f, 0xb9, 0x14, 0x54, 0xbb, 0x05, 0x7b);


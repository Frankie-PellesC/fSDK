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

DEFINE_GUID(FWPM_LAYER_ALE_ENDPOINT_CLOSURE_V6, 0xbb536ccd, 0x4755, 0x4ba9, 0x9f, 0xf7, 0xf9, 0xed, 0xf8, 0x69, 0x9c, 0x7b);


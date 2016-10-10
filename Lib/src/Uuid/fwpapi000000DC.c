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

DEFINE_GUID(FWPM_CALLOUT_SET_OPTIONS_AUTH_CONNECT_LAYER_V6, 0x98e5373c, 0xb884, 0x490f, 0xb6, 0x5f, 0x2f, 0x6a, 0x4a, 0x57, 0x51, 0x95);


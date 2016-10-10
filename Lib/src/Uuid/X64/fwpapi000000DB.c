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

DEFINE_GUID(FWPM_CALLOUT_SET_OPTIONS_AUTH_CONNECT_LAYER_V4, 0xbc582280, 0x1677, 0x41e9, 0x94, 0xab, 0xc2, 0xfc, 0xb1, 0x5c, 0x2e, 0xeb);


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

DEFINE_GUID(FWPM_CALLOUT_EDGE_TRAVERSAL_ALE_LISTEN_V4, 0x33486ab5, 0x6d5e, 0x4e65, 0xa0, 0x0b, 0xa7, 0xaf, 0xed, 0x0b, 0xa9, 0xa1);


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

DEFINE_GUID(FWPM_LAYER_ALE_FLOW_ESTABLISHED_V4_DISCARD, 0x146ae4a9, 0xa1d2, 0x4d43, 0xa3, 0x1a, 0x4c, 0x42, 0x68, 0x2b, 0x8e, 0x4f);


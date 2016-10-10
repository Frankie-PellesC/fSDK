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

DEFINE_GUID(FWPM_LAYER_ALE_FLOW_ESTABLISHED_V6_DISCARD, 0x46928636, 0xbbca, 0x4b76, 0x94, 0x1d, 0x0f, 0xa7, 0xf5, 0xd7, 0xd3, 0x72);


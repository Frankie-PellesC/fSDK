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

DEFINE_GUID(FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V4_DISCARD, 0x0b5812a2, 0xc3ff, 0x4eca, 0xb8, 0x8d, 0xc7, 0x9e, 0x20, 0xac, 0x63, 0x22);


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

DEFINE_GUID(FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V6_DISCARD, 0xcbc998bb, 0xc51f, 0x4c1a, 0xbb, 0x4f, 0x97, 0x75, 0xfc, 0xac, 0xab, 0x2f);


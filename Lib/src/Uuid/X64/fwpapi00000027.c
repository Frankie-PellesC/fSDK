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

DEFINE_GUID(FWPM_LAYER_ALE_RESOURCE_ASSIGNMENT_V4, 0x1247d66d, 0x0b60, 0x4a15, 0x8d, 0x44, 0x71, 0x55, 0xd0, 0xf5, 0x3a, 0x0c);


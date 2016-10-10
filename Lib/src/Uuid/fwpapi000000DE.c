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

DEFINE_GUID(FWPM_CALLOUT_EDGE_TRAVERSAL_ALE_RESOURCE_ASSIGNMENT_V4, 0x079b1010, 0xf1c5, 0x4fcd, 0xae, 0x05, 0xda, 0x41, 0x10, 0x7a, 0xbd, 0x0b);


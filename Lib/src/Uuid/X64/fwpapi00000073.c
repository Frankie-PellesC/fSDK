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

DEFINE_GUID(FWPM_CONDITION_NEXTHOP_SUB_INTERFACE_INDEX, 0xef8a6122, 0x0577, 0x45a7, 0x9a, 0xaf, 0x82, 0x5f, 0xbe, 0xb4, 0xfb, 0x95);


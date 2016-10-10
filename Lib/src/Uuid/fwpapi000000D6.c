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

DEFINE_GUID(FWPM_CALLOUT_WFP_TRANSPORT_LAYER_V6_SILENT_DROP, 0x8693cc74, 0xa075, 0x4156, 0xb4, 0x76, 0x92, 0x86, 0xee, 0xce, 0x81, 0x4e);


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

DEFINE_GUID(FWPM_CALLOUT_WFP_TRANSPORT_LAYER_V4_SILENT_DROP, 0xeda08606, 0x2494, 0x4d78, 0x89, 0xbc, 0x67, 0x83, 0x7c, 0x03, 0xb9, 0x69);


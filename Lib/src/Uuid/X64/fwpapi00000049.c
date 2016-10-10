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

DEFINE_GUID(FWPM_LAYER_NAME_RESOLUTION_CACHE_V4, 0x0c2aa681, 0x905b, 0x4ccd, 0xa4, 0x67, 0x4d, 0xd8, 0x11, 0xd0, 0x7b, 0x7b);


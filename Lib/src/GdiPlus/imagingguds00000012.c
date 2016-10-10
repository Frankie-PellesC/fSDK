// Created file "Lib\src\GdiPlus\imagingguds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FormatIDJpegAppHeaders, 0x1c4afdcd, 0x6177, 0x43cf, 0xab, 0xc7, 0x5f, 0x51, 0xaf, 0x39, 0xee, 0x85);


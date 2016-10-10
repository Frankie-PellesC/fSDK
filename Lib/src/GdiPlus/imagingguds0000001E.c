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

DEFINE_GUID(EncoderImageItems, 0x63875e13, 0x1f1d, 0x45ab, 0x91, 0x95, 0xa2, 0x9b, 0x60, 0x66, 0xa6, 0x50);


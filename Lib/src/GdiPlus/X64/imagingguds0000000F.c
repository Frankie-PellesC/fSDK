// Created file "Lib\src\GdiPlus\X64\imagingguds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FrameDimensionResolution, 0x84236f7b, 0x3bd3, 0x428f, 0x8d, 0xab, 0x4e, 0xa1, 0x43, 0x9c, 0xa3, 0x15);


// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_IImageDecodeFilter, 0x607fd4e8, 0x0a03, 0x11d1, 0xab, 0x1d, 0x00, 0xc0, 0x4f, 0xc9, 0xb3, 0x04);


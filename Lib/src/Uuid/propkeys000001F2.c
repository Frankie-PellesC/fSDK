// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Image_CompressedBitsPerPixelDenominator, 0x1f8844e1, 0x24ad, 0x4508, 0x9d, 0xfd, 0x53, 0x26, 0xa4, 0x15, 0xce, 0x02);


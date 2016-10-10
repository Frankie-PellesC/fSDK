// Created file "Lib\src\Uuid\wincodec_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CATID_WICBitmapDecoders, 0x7ed96837, 0x96f0, 0x4812, 0xb2, 0x11, 0xf1, 0x3c, 0x24, 0x11, 0x7e, 0xd3);


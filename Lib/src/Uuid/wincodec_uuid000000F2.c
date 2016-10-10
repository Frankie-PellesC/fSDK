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

DEFINE_GUID(IID_IMILBitmapScaler, 0xa767b0f0, 0x1c8c, 0x4aef, 0x56, 0x8f, 0xad, 0xf9, 0x6d, 0xcf, 0xd5, 0xcb);


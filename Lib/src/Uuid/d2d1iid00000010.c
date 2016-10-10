// Created file "Lib\src\Uuid\d2d1iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ID2D1DCRenderTarget, 0x1c51bc64, 0xde61, 0x46fd, 0x98, 0x99, 0x63, 0xa5, 0xd8, 0xf0, 0x39, 0x50);


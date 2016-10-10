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

DEFINE_GUID(IID_IMILBitmapLock, 0xa67b2b53, 0x8fa1, 0x4155, 0x8f, 0x64, 0x0c, 0x24, 0x7a, 0x8f, 0x84, 0xcd);


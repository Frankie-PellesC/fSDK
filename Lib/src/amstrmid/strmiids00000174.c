// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(AM_KSCATEGORY_VBICODEC, 0x07dad660, 0x22f1, 0x11d1, 0xa9, 0xf4, 0x00, 0xc0, 0x4f, 0xbb, 0xde, 0x8f);


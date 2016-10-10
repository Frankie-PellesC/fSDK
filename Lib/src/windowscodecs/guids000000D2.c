// Created file "Lib\src\windowscodecs\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWICBitmapFrameEncodeInternal, 0xe8cfe115, 0x2841, 0x42f1, 0xb4, 0xe9, 0xe1, 0xaa, 0x35, 0x8f, 0x38, 0x3e);


// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_FUNCTIONAL_CATEGORY_VIDEO_CAPTURE, 0xe23e5f6b, 0x7243, 0x43aa, 0x8d, 0xf1, 0x0e, 0xb3, 0xd9, 0x68, 0xa9, 0x18);


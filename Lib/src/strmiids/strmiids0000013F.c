// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CAPTION_FORMAT_DIRECTV, 0xe9ca1ce7, 0x915e, 0x47be, 0x9b, 0xb9, 0xbf, 0x1d, 0x8a, 0x13, 0xa5, 0xec);


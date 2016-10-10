// Created file "Lib\src\WiaGuid\wiavideo_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WiaVideo, 0x3908c3cd, 0x4478, 0x4536, 0xaf, 0x2f, 0x10, 0xc2, 0x5d, 0x4e, 0xf8, 0x9a);


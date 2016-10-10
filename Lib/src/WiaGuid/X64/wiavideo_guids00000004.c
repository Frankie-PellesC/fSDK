// Created file "Lib\src\WiaGuid\X64\wiavideo_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_WIAVIDEOLib, 0x1320ad9e, 0xa50f, 0x4ed0, 0xb1, 0xa4, 0x4e, 0x45, 0xec, 0x25, 0x00, 0x5e);


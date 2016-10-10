// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PINNAME_VIDEO_NABTS_CAPTURE, 0x29703660, 0x498a, 0x11d2, 0xb4, 0xb1, 0x00, 0xa0, 0xd1, 0x02, 0xcf, 0xbe);


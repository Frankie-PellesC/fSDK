// Created file "Lib\src\Bits\bits2_5_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBackgroundCopyJobHttpOptions, 0xf1bd1079, 0x9f01, 0x4bdc, 0x80, 0x36, 0xf0, 0x9b, 0x70, 0x09, 0x50, 0x66);

DEFINE_GUID(LIBID_BackgroundCopyManager2_5, 0x4974177c, 0x3bb6, 0x4c37, 0x9f, 0xf0, 0x6b, 0x74, 0x26, 0xf0, 0xab, 0xa9);

DEFINE_GUID(CLSID_BackgroundCopyManager2_5, 0x03ca98d6, 0xff5d, 0x49b8, 0xab, 0xc6, 0x03, 0xdd, 0x84, 0x12, 0x70, 0x20);


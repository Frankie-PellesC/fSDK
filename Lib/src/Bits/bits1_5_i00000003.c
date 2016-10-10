// Created file "Lib\src\Bits\bits1_5_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBackgroundCopyJob2, 0x54b50739, 0x686f, 0x45eb, 0x9d, 0xff, 0xd6, 0xa9, 0xa0, 0xfa, 0xa9, 0xaf);

DEFINE_GUID(LIBID_BackgroundCopyManager1_5, 0xea9319ea, 0xc628, 0x480f, 0x83, 0x31, 0x76, 0x8f, 0xac, 0x39, 0x7e, 0x4e);

DEFINE_GUID(CLSID_BackgroundCopyManager1_5, 0xf087771f, 0xd74f, 0x4c1a, 0xbb, 0x8a, 0xe1, 0x6a, 0xca, 0x91, 0x24, 0xea);


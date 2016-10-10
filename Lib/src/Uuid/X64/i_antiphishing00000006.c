// Created file "Lib\src\Uuid\X64\i_antiphishing"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAntiPhishingBrowserSolution2, 0x05159d5d, 0x69b5, 0x47ad, 0xb8, 0xd3, 0x0d, 0x2d, 0x0d, 0x6b, 0x40, 0xf6);


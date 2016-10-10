// Created file "Lib\src\Uuid\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_CUSTOM_LOCALMACHINEZONEUNLOCKED, 0x215935d7, 0xa732, 0x4ab9, 0x90, 0xea, 0x37, 0x8a, 0x31, 0x9c, 0xff, 0xc2);


// Created file "Lib\src\Uuid\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ImageRecompress, 0x6e33091c, 0xd2f8, 0x4740, 0xb5, 0x5e, 0x2e, 0x11, 0xd1, 0x47, 0x7a, 0x2c);


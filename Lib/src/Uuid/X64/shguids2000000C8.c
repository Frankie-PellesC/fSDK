// Created file "Lib\src\Uuid\X64\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITrayDeskBand, 0x6d67e846, 0x5b9c, 0x4db8, 0x9c, 0xbc, 0xdd, 0xe1, 0x2f, 0x42, 0x54, 0xf1);


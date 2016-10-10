// Created file "Lib\src\amstrmid\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CODECAPI_AVDDSurroundMode, 0x99f2f386, 0x98d1, 0x4452, 0xa1, 0x63, 0xab, 0xc7, 0x8a, 0x6e, 0xb7, 0x70);


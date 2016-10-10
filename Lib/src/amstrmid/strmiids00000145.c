// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MEDIASUBTYPE_MPEG2_VERSIONED_TABLES, 0x1ed988b0, 0x3ffc, 0x4523, 0x87, 0x25, 0x34, 0x7b, 0xee, 0xc1, 0xa8, 0xa0);


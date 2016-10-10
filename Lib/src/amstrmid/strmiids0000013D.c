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

DEFINE_GUID(CAPTION_FORMAT_ATSC, 0x3ed9cb31, 0xfd10, 0x4ade, 0xbc, 0xcc, 0xfb, 0x91, 0x05, 0xd2, 0xf3, 0xef);


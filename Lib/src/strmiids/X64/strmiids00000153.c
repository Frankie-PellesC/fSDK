// Created file "Lib\src\strmiids\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MEDIASUBTYPE_MPEG2_PBDA_TRANSPORT_RAW, 0x0d7aed42, 0xcb9a, 0x11db, 0x97, 0x05, 0x00, 0x50, 0x56, 0xc0, 0x00, 0x08);


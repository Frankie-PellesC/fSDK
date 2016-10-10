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

DEFINE_GUID(DSATTRIB_DSHOW_STREAM_DESC, 0x5fb5673b, 0x0a2a, 0x4565, 0x82, 0x7b, 0x68, 0x53, 0xfd, 0x75, 0xe6, 0x11);


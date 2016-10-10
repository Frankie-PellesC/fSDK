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

DEFINE_GUID(DSATTRIB_SAMPLE_LIVE_STREAM_TIME, 0x892cd111, 0x72f3, 0x411d, 0x8b, 0x91, 0xa9, 0xe9, 0x12, 0x3a, 0xc2, 0x9a);


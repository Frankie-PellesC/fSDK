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

DEFINE_GUID(CLSID_MPEG2Demultiplexer_NoClock, 0x687d3367, 0x3644, 0x467a, 0xad, 0xfe, 0x6c, 0xd7, 0xa8, 0x5c, 0x4a, 0x2c);


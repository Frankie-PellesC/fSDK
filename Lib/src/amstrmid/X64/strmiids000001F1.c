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

DEFINE_GUID(CODECAPI_GUID_AVEncMLP, 0x05f73e29, 0xf0d1, 0x431e, 0xa4, 0x1c, 0xa4, 0x74, 0x32, 0xec, 0x5a, 0x66);


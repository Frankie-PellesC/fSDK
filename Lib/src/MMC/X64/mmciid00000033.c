// Created file "Lib\src\MMC\X64\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IResultData2, 0x0f36e0eb, 0xa7f1, 0x4a81, 0xbe, 0x5a, 0x92, 0x47, 0xf7, 0xde, 0x4b, 0x1b);


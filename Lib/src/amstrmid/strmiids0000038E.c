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

DEFINE_GUID(IID_IDVSplitter, 0x92a3a302, 0xda7c, 0x4a1f, 0xba, 0x7e, 0x18, 0x02, 0xbb, 0x5d, 0x2d, 0x02);


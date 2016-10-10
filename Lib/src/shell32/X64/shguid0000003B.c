// Created file "Lib\src\Shell32\X64\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDockingWindowFrame, 0x47d2657a, 0x7b27, 0x11d0, 0x8c, 0xa9, 0x00, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);


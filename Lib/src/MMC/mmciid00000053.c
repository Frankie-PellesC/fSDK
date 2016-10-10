// Created file "Lib\src\MMC\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWaitCursor, 0x7dfcf9be, 0x9a2b, 0x4e32, 0x9e, 0x3e, 0x96, 0x20, 0x66, 0x17, 0xb5, 0xed);


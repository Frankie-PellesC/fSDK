// Created file "Lib\src\Uuid\oleext_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDifferencing, 0x994f0af0, 0x2977, 0x11ce, 0xbb, 0x80, 0x08, 0x00, 0x2b, 0x36, 0xb2, 0xb0);


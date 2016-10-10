// Created file "Lib\src\Uuid\storext_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOverlappedCompletion, 0x521a28f0, 0xe40b, 0x11ce, 0xb2, 0xc9, 0x00, 0xaa, 0x00, 0x68, 0x09, 0x37);


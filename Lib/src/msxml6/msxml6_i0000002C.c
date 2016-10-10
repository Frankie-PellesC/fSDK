// Created file "Lib\src\msxml6\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVBSAXContentHandler, 0x2ed7290a, 0x4dd5, 0x4b46, 0xbb, 0x26, 0x4e, 0x41, 0x55, 0xe7, 0x7f, 0xaa);


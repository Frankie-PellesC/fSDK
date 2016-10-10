// Created file "Lib\src\format\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ComPlusRuntime, 0xbed7f4ea, 0x1a96, 0x11d2, 0x8f, 0x08, 0x00, 0xa0, 0xc9, 0xa6, 0x18, 0x6d);


// Created file "Lib\src\format\X64\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHostFilter, 0xd0e80dd3, 0x12d4, 0x11d3, 0xb3, 0x9d, 0x00, 0xc0, 0x4f, 0xf8, 0x17, 0x95);


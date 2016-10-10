// Created file "Lib\src\Uuid\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(BFID_GRAY_16, 0xf9d6bc00, 0x449c, 0x11d0, 0x91, 0x8c, 0x00, 0xaa, 0x00, 0x6c, 0x1a, 0x01);


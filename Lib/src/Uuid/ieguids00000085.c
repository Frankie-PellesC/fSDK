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

DEFINE_GUID(CLSID_NotificaitonTest2, 0xc733e502, 0x576e, 0x11d0, 0xb2, 0x8c, 0x00, 0xc0, 0x4f, 0xd7, 0xcd, 0x22);


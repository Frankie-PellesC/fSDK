// Created file "Lib\src\Uuid\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHTMLWindow2, 0x332c4427, 0x26cb, 0x11d0, 0xb4, 0x83, 0x00, 0xc0, 0x4f, 0xd9, 0x01, 0x19);


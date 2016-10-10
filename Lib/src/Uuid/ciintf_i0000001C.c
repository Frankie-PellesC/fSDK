// Created file "Lib\src\Uuid\ciintf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICiISearchCreator, 0x7dc07fa0, 0x902e, 0x11d0, 0xa8, 0x0c, 0x00, 0xa0, 0xc9, 0x06, 0x24, 0x1a);


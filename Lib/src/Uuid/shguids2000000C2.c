// Created file "Lib\src\Uuid\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INameSpaceTreeControlDropHandler, 0xf9c665d6, 0xc2f2, 0x4c19, 0xbf, 0x33, 0x83, 0x22, 0xd7, 0x35, 0x2f, 0x51);


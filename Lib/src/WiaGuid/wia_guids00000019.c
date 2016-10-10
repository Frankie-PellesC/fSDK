// Created file "Lib\src\WiaGuid\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaItem2, 0x6cba0075, 0x1287, 0x407d, 0x9b, 0x77, 0xcf, 0x0e, 0x03, 0x04, 0x35, 0xcc);


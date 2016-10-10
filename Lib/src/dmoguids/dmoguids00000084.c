// Created file "Lib\src\dmoguids\dmoguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DMOCATEGORY_VIDEO_DECODER, 0x4a69b442, 0x28be, 0x4991, 0x96, 0x9c, 0xb5, 0x00, 0xad, 0xf5, 0xd8, 0xa8);


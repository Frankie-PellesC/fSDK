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

DEFINE_GUID(DMOCATEGORY_AUDIO_DECODER, 0x57f2db8b, 0xe6bb, 0x4513, 0x9d, 0x43, 0xdc, 0xd2, 0xa6, 0x59, 0x31, 0x25);


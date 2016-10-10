// Created file "Lib\src\dmoguids\X64\dmoguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DMOCATEGORY_AUDIO_CAPTURE_EFFECT, 0xf665aaba, 0x3e09, 0x4920, 0xaa, 0x5f, 0x21, 0x98, 0x11, 0x14, 0x8f, 0x09);


// Created file "Lib\src\mfuuid\mfplay_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFPMediaPlayerCallback, 0x766c8ffb, 0x5fdb, 0x4fea, 0xa2, 0x8d, 0xb9, 0x12, 0x99, 0x6f, 0x51, 0xbd);


// Created file "Lib\src\mfuuid\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMpeg2TSPsiParser, 0xc5d0dd45, 0x05e2, 0x4703, 0x93, 0x8f, 0x4a, 0xbb, 0xc6, 0xe3, 0xde, 0xe0);


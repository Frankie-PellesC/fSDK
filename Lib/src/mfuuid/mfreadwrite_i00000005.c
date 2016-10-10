// Created file "Lib\src\mfuuid\mfreadwrite_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFSourceReaderCallback, 0xdeec8d99, 0xfa1d, 0x4d82, 0x84, 0xc2, 0x2c, 0x89, 0x69, 0x94, 0x48, 0x67);


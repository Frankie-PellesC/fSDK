// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CODECAPI_AVEncDDSurround90DegreeePhaseShift, 0x25ecec9d, 0x3553, 0x42c0, 0xbb, 0x56, 0xd2, 0x57, 0x92, 0x10, 0x4f, 0x80);


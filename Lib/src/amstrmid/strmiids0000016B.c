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

DEFINE_GUID(AM_KSPROPSETID_MPEG4_MediaType_Attributes, 0xff6c4bfa, 0x07a9, 0x4c7b, 0xa2, 0x37, 0x67, 0x2f, 0x9d, 0x68, 0x06, 0x5f);


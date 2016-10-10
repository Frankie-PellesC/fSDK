// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WiaImgFmt_PDFA, 0x9980bd5b, 0x3463, 0x43c7, 0xbd, 0xca, 0x3c, 0xaa, 0x14, 0x6f, 0x22, 0x9f);


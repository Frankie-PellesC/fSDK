// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(ME_END_OF_PRESENTATION, 0xe2a339a8, 0xa415, 0x483c, 0x90, 0xb2, 0x2b, 0x6a, 0xa3, 0x9a, 0x17, 0xf0);


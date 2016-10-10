// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PROPSETID_VIDCAP_SELECTOR, 0x1abdaeca, 0x68b6, 0x4f83, 0x93, 0x71, 0xb4, 0x13, 0x90, 0x7c, 0x7b, 0x9f);

